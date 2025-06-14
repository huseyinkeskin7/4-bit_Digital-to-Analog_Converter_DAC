# 4-bit_Digital-to-Analog_Converter_DAC
# Türkçe
Bu proje, Arduino ve MATLAB GUI kullanılarak oluşturulmuş bir 4-bit Dijital-Analog Dönüştürücü (DAC) sistemini kapsamaktadır. Amaç, kullanıcıdan alınan dijital 4-bit veriyi, op-amp devresi aracılığıyla analog gerilime dönüştürmek ve bu süreci MATLAB arayüzüyle görsel olarak yönetmektir.
Projenin temel bileşenleri:
    ✅ İki DAC devresi kuruldu:
        Binary Ağırlıklı Direnç (Binary-Weighted Resistor)
        R-2R Ladder Devresi
    ✅ Arduino üzerinden 4-bit dijital veri çıkışı sağlandı.
    ✅ Op-amp ile analog voltaj üretimi yapıldı ve ölçümler alındı.
    ✅ MATLAB GUI (.mlapp) üzerinden:
        Kullanıcıdan veri girişi alındı.
        Seri iletişim ile Arduino'dan değerler okundu.
        Gerçek zamanlı voltaj değerleri ve grafikler gösterildi.
Bu sistem, DAC prensiplerinin anlaşılması, R-2R ve binary direnç yapılarının karşılaştırılması ve Arduino–MATLAB entegrasyonunun uygulamalı şekilde öğrenilmesini sağlar.

# English
This project demonstrates a 4-bit Digital-to-Analog Converter (DAC) system implemented using Arduino and a MATLAB GUI. The objective is to convert user-inputted 4-bit digital data into an analog voltage using an op-amp, and control and visualize this process through a custom graphical interface.
Core project components:
    ✅ Two DAC circuit types implemented:
        Binary-Weighted Resistor DAC
        R-2R Ladder DAC
    ✅ Arduino outputs 4-bit digital signals.
    ✅ Analog output is generated using an op-amp and measured.
    ✅ MATLAB GUI (.mlapp) includes:
        Real-time binary input and analog output display.
        Serial communication with Arduino.
        Visualization through customizable INL and input-output plots.
This project provides hands-on experience in understanding DAC theory, comparing circuit topologies, and integrating hardware with software for signal processing and data analysis.
