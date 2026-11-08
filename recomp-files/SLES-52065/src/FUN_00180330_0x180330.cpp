#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00180330
// Address: 0x180330 - 0x180a3c
void FUN_00180330_0x180330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180330_0x180330");
#endif

    switch (ctx->pc) {
        case 0x180380u: goto label_180380;
        case 0x1803a0u: goto label_1803a0;
        case 0x1803c0u: goto label_1803c0;
        case 0x180410u: goto label_180410;
        case 0x180448u: goto label_180448;
        case 0x180488u: goto label_180488;
        case 0x180494u: goto label_180494;
        case 0x1804b4u: goto label_1804b4;
        case 0x180838u: goto label_180838;
        case 0x18098cu: goto label_18098c;
        default: break;
    }

    ctx->pc = 0x180330u;

    // 0x180330: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x180330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x180334: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x180334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180338: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x180338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18033c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18033cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x180340: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x180340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x180344: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x180344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x180348: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x180348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18034c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18034cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x180350: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x180350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x180354: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x180354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x180358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18035c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18035cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180360: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180364: 0x8f86865c  lw          $a2, -0x79A4($gp)
    ctx->pc = 0x180364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
    // 0x180368: 0x14c3001e  bne         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x180368u;
    {
        const bool branch_taken_0x180368 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x18036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180368u;
        // 0x18036c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180368) {
            ctx->pc = 0x1803E4u;
            goto label_1803e4;
        }
    }
    ctx->pc = 0x180370u;
    // 0x180370: 0x8e470068  lw          $a3, 0x68($s2)
    ctx->pc = 0x180370u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x180374: 0x8e480044  lw          $t0, 0x44($s2)
    ctx->pc = 0x180374u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x180378: 0xc0607bc  jal         func_181EF0
    ctx->pc = 0x180378u;
    SET_GPR_U32(ctx, 31, 0x180380u);
    ctx->pc = 0x18037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180378u;
    // 0x18037c: 0x8e460048  lw          $a2, 0x48($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181EF0u, 0x180378u, 0x180380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180380u;
label_180380:
    // 0x180380: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x180380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x180384: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x180384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x180388: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x180388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
    // 0x18038c: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x18038cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x180390: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x180390u;
    {
        const bool branch_taken_0x180390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180390u;
        // 0x180394: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180390) {
            ctx->pc = 0x1803DCu;
            goto label_1803dc;
        }
    }
    ctx->pc = 0x180398u;
    // 0x180398: 0xc060898  jal         func_182260
    ctx->pc = 0x180398u;
    SET_GPR_U32(ctx, 31, 0x1803A0u);
    ctx->pc = 0x182260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182260u, 0x180398u, 0x1803A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1803A0u;
label_1803a0:
    // 0x1803a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1803a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1803a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1803a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1803a8: 0xaf83865c  sw          $v1, -0x79A4($gp)
    ctx->pc = 0x1803a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
    // 0x1803ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1803acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1803b0: 0x8e470060  lw          $a3, 0x60($s2)
    ctx->pc = 0x1803b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1803b4: 0x8e480064  lw          $t0, 0x64($s2)
    ctx->pc = 0x1803b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1803b8: 0xc047578  jal         func_11D5E0
    ctx->pc = 0x1803B8u;
    SET_GPR_U32(ctx, 31, 0x1803C0u);
    ctx->pc = 0x1803BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1803B8u;
    // 0x1803bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D5E0u, 0x1803B8u, 0x1803C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1803C0u;
label_1803c0:
    // 0x1803c0: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1803c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1803c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1803c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1803c8: 0xaf838344  sw          $v1, -0x7CBC($gp)
    ctx->pc = 0x1803c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935364), GPR_U32(ctx, 3));
    // 0x1803cc: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1803ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1803d0: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x1803d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1803d4: 0xac640044  sw          $a0, 0x44($v1)
    ctx->pc = 0x1803d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
    // 0x1803d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1803d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1803dc:
    // 0x1803dc: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x1803DCu;
    {
        const bool branch_taken_0x1803dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1803E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803DCu;
        // 0x1803e0: 0xaf838670  sw          $v1, -0x7990($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803dc) {
            ctx->pc = 0x180A0Cu;
            goto label_180a0c;
        }
    }
    ctx->pc = 0x1803E4u;
label_1803e4:
    // 0x1803e4: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x1803e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1803e8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1803E8u;
    {
        const bool branch_taken_0x1803e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1803e8) {
            ctx->pc = 0x18041Cu;
            goto label_18041c;
        }
    }
    ctx->pc = 0x1803F0u;
    // 0x1803f0: 0x8c660074  lw          $a2, 0x74($v1)
    ctx->pc = 0x1803f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x1803f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1803f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1803f8: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1803F8u;
    {
        const bool branch_taken_0x1803f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1803f8) {
            ctx->pc = 0x18041Cu;
            goto label_18041c;
        }
    }
    ctx->pc = 0x180400u;
    // 0x180400: 0x8e460048  lw          $a2, 0x48($s2)
    ctx->pc = 0x180400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x180404: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180408: 0xc0607bc  jal         func_181EF0
    ctx->pc = 0x180408u;
    SET_GPR_U32(ctx, 31, 0x180410u);
    ctx->pc = 0x18040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180408u;
    // 0x18040c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181EF0u, 0x180408u, 0x180410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180410u;
label_180410:
    // 0x180410: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x180410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x180414: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x180414u;
    {
        const bool branch_taken_0x180414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180414u;
        // 0x180418: 0xaf838670  sw          $v1, -0x7990($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180414) {
            ctx->pc = 0x180A0Cu;
            goto label_180a0c;
        }
    }
    ctx->pc = 0x18041Cu;
label_18041c:
    // 0x18041c: 0x8f838670  lw          $v1, -0x7990($gp)
    ctx->pc = 0x18041cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936176)));
    // 0x180420: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x180420u;
    {
        const bool branch_taken_0x180420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180420) {
            ctx->pc = 0x180448u;
            goto label_180448;
        }
    }
    ctx->pc = 0x180428u;
    // 0x180428: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x180428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18042c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18042cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180430: 0xaf828670  sw          $v0, -0x7990($gp)
    ctx->pc = 0x180430u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 2));
    // 0x180434: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x180434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180438: 0x8e460048  lw          $a2, 0x48($s2)
    ctx->pc = 0x180438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x18043c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18043cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180440: 0xc0607bc  jal         func_181EF0
    ctx->pc = 0x180440u;
    SET_GPR_U32(ctx, 31, 0x180448u);
    ctx->pc = 0x180444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180440u;
    // 0x180444: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181EF0u, 0x180440u, 0x180448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180448u;
label_180448:
    // 0x180448: 0x8f84865c  lw          $a0, -0x79A4($gp)
    ctx->pc = 0x180448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
    // 0x18044c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18044cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x180450: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x180450u;
    {
        const bool branch_taken_0x180450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x180450) {
            ctx->pc = 0x18046Cu;
            goto label_18046c;
        }
    }
    ctx->pc = 0x180458u;
    // 0x180458: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x180458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x18045c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x18045cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180460: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x180460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x180464: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x180464u;
    {
        const bool branch_taken_0x180464 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x180464) {
            ctx->pc = 0x1804DCu;
            goto label_1804dc;
        }
    }
    ctx->pc = 0x18046Cu;
label_18046c:
    // 0x18046c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x180470: 0xaf82865c  sw          $v0, -0x79A4($gp)
    ctx->pc = 0x180470u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 2));
    // 0x180474: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x180474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x180478: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180478u;
    {
        const bool branch_taken_0x180478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180478) {
            ctx->pc = 0x18049Cu;
            goto label_18049c;
        }
    }
    ctx->pc = 0x180480u;
    // 0x180480: 0xc060898  jal         func_182260
    ctx->pc = 0x180480u;
    SET_GPR_U32(ctx, 31, 0x180488u);
    ctx->pc = 0x182260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182260u, 0x180480u, 0x180488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180488u;
label_180488:
    // 0x180488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x180488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18048c: 0xc0478dc  jal         func_11E370
    ctx->pc = 0x18048Cu;
    SET_GPR_U32(ctx, 31, 0x180494u);
    ctx->pc = 0x180490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18048Cu;
    // 0x180490: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x18048Cu, 0x180494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180494u;
label_180494:
    // 0x180494: 0xaf808344  sw          $zero, -0x7CBC($gp)
    ctx->pc = 0x180494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935364), GPR_U32(ctx, 0));
    // 0x180498: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x180498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_18049c:
    // 0x18049c: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x18049cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1804a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1804a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1804a4: 0x8e470068  lw          $a3, 0x68($s2)
    ctx->pc = 0x1804a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1804a8: 0x8e480044  lw          $t0, 0x44($s2)
    ctx->pc = 0x1804a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1804ac: 0xc0607bc  jal         func_181EF0
    ctx->pc = 0x1804ACu;
    SET_GPR_U32(ctx, 31, 0x1804B4u);
    ctx->pc = 0x1804B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1804ACu;
    // 0x1804b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181EF0u, 0x1804ACu, 0x1804B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1804B4u;
label_1804b4:
    // 0x1804b4: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x1804b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1804b8: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x1804b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1804bc: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1804bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1804c0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1804C0u;
    {
        const bool branch_taken_0x1804c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1804C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804C0u;
        // 0x1804c4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804c0) {
            ctx->pc = 0x1804CCu;
            goto label_1804cc;
        }
    }
    ctx->pc = 0x1804C8u;
    // 0x1804c8: 0xaf83865c  sw          $v1, -0x79A4($gp)
    ctx->pc = 0x1804c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
label_1804cc:
    // 0x1804cc: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x1804ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1804d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1804d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1804d4: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x1804D4u;
    {
        const bool branch_taken_0x1804d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1804D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804D4u;
        // 0x1804d8: 0xae430068  sw          $v1, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804d4) {
            ctx->pc = 0x180A0Cu;
            goto label_180a0c;
        }
    }
    ctx->pc = 0x1804DCu;
label_1804dc:
    // 0x1804dc: 0x83838674  lb          $v1, -0x798C($gp)
    ctx->pc = 0x1804dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x1804e0: 0x146000d7  bnez        $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1804E0u;
    {
        const bool branch_taken_0x1804e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1804E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804E0u;
        // 0x1804e4: 0x8cb00074  lw          $s0, 0x74($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804e0) {
            ctx->pc = 0x180840u;
            goto label_180840;
        }
    }
    ctx->pc = 0x1804E8u;
    // 0x1804e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1804e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1804ec: 0x30060001  andi        $a2, $zero, 0x1
    ctx->pc = 0x1804ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1804f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1804f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1804f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1804f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1804f8: 0xfc208818  sd          $zero, -0x77E8($at)
    ctx->pc = 0x1804f8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936600), GPR_U64(ctx, 0));
    // 0x1804fc: 0x34028006  ori         $v0, $zero, 0x8006
    ctx->pc = 0x1804fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x180500: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x180500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x180504: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180508: 0xfc2387e0  sd          $v1, -0x7820($at)
    ctx->pc = 0x180508u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3687E0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3687E0u, _value); } while (0);
    // 0x18050c: 0x30160003  andi        $s6, $zero, 0x3
    ctx->pc = 0x18050cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x180510: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x180510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x180514: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180518: 0xfc2287e8  sd          $v0, -0x7818($at)
    ctx->pc = 0x180518u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3687E8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3687E8u, _value); } while (0);
    // 0x18051c: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x18051cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x180520: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180524: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x180524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x180528: 0x902d87f0  lbu         $t5, -0x7810($at)
    ctx->pc = 0x180528u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x3687F0u));
    // 0x18052c: 0x26040  sll         $t4, $v0, 1
    ctx->pc = 0x18052cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x180530: 0x24980  sll         $t1, $v0, 6
    ctx->pc = 0x180530u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x180534: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x180534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x180538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18053c: 0x163900  sll         $a3, $s6, 4
    ctx->pc = 0x18053cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x180540: 0x240bfff1  addiu       $t3, $zero, -0xF
    ctx->pc = 0x180540u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x180544: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x180544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x180548: 0x62980  sll         $a1, $a2, 6
    ctx->pc = 0x180548u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x18054c: 0x6a1c0  sll         $s4, $a2, 7
    ctx->pc = 0x18054cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x180550: 0x640e0002  daddiu      $t6, $zero, 0x2
    ctx->pc = 0x180550u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x180554: 0x2418fffb  addiu       $t8, $zero, -0x5
    ctx->pc = 0x180554u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x180558: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18055c: 0x6c880  sll         $t9, $a2, 2
    ctx->pc = 0x18055cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x180560: 0x902a87f1  lbu         $t2, -0x780F($at)
    ctx->pc = 0x180560u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936561)));
    // 0x180564: 0x641e0008  daddiu      $fp, $zero, 0x8
    ctx->pc = 0x180564u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x180568: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18056c: 0xfc228828  sd          $v0, -0x77D8($at)
    ctx->pc = 0x18056cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368828u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368828u, _value); } while (0);
    // 0x180570: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180574: 0x1a81024  and         $v0, $t5, $t0
    ctx->pc = 0x180574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 8));
    // 0x180578: 0x903387f2  lbu         $s3, -0x780E($at)
    ctx->pc = 0x180578u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936562)));
    // 0x18057c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x180580: 0x240dfff9  addiu       $t5, $zero, -0x7
    ctx->pc = 0x180580u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x180584: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180588: 0x2689824  and         $s3, $s3, $t0
    ctx->pc = 0x180588u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 8));
    // 0x18058c: 0xa02287f0  sb          $v0, -0x7810($at)
    ctx->pc = 0x18058cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936560), (uint8_t)GPR_U32(ctx, 2));
    // 0x180590: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180594: 0x1431024  and         $v0, $t2, $v1
    ctx->pc = 0x180594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x180598: 0x902f87f0  lbu         $t7, -0x7810($at)
    ctx->pc = 0x180598u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936560)));
    // 0x18059c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x18059cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1805a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1805a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1805a4: 0x1eb5824  and         $t3, $t7, $t3
    ctx->pc = 0x1805a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & GPR_U64(ctx, 11));
    // 0x1805a8: 0xa02287f1  sb          $v0, -0x780F($at)
    ctx->pc = 0x1805a8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936561), (uint8_t)GPR_U32(ctx, 2));
    // 0x1805ac: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1805acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x1805b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1805b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1805b4: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x1805b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1805b8: 0x902a87f1  lbu         $t2, -0x780F($at)
    ctx->pc = 0x1805b8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936561)));
    // 0x1805bc: 0x262b825  or          $s7, $s3, $v0
    ctx->pc = 0x1805bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1805c0: 0x2413ff7f  addiu       $s3, $zero, -0x81
    ctx->pc = 0x1805c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1805c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1805c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1805c8: 0x90358810  lbu         $s5, -0x77F0($at)
    ctx->pc = 0x1805c8u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)FAST_READ8(0x368810u));
    // 0x1805cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1805ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1805d0: 0xa03787f2  sb          $s7, -0x780E($at)
    ctx->pc = 0x1805d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x3687F2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3687F2u, _value); } while (0);
    // 0x1805d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1805d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1805d8: 0x2417fff8  addiu       $s7, $zero, -0x8
    ctx->pc = 0x1805d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1805dc: 0x902f87f2  lbu         $t7, -0x780E($at)
    ctx->pc = 0x1805dcu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x3687F2u));
    // 0x1805e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1805e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1805e4: 0x1ed6824  and         $t5, $t7, $t5
    ctx->pc = 0x1805e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x1805e8: 0xa02b87f0  sb          $t3, -0x7810($at)
    ctx->pc = 0x1805e8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936560), (uint8_t)GPR_U32(ctx, 11));
    // 0x1805ec: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x1805ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x1805f0: 0x1445824  and         $t3, $t2, $a0
    ctx->pc = 0x1805f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x1805f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1805f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1805f8: 0x1655825  or          $t3, $t3, $a1
    ctx->pc = 0x1805f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x1805fc: 0x2b35024  and         $t2, $s5, $s3
    ctx->pc = 0x1805fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & GPR_U64(ctx, 19));
    // 0x180600: 0xa02b87f1  sb          $t3, -0x780F($at)
    ctx->pc = 0x180600u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936561), (uint8_t)GPR_U32(ctx, 11));
    // 0x180604: 0x1545025  or          $t2, $t2, $s4
    ctx->pc = 0x180604u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 20));
    // 0x180608: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18060c: 0x65840  sll         $t3, $a2, 1
    ctx->pc = 0x18060cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x180610: 0xa02a8810  sb          $t2, -0x77F0($at)
    ctx->pc = 0x180610u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936592), (uint8_t)GPR_U32(ctx, 10));
    // 0x180614: 0x6a940  sll         $s5, $a2, 5
    ctx->pc = 0x180614u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x180618: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18061c: 0x240afffd  addiu       $t2, $zero, -0x3
    ctx->pc = 0x18061cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x180620: 0x902c8810  lbu         $t4, -0x77F0($at)
    ctx->pc = 0x180620u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)FAST_READ8(0x368810u));
    // 0x180624: 0x2414ffdf  addiu       $s4, $zero, -0x21
    ctx->pc = 0x180624u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x180628: 0x640e0010  daddiu      $t6, $zero, 0x10
    ctx->pc = 0x180628u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18062c: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x18062cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x180630: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180634: 0x1842024  and         $a0, $t4, $a0
    ctx->pc = 0x180634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & GPR_U64(ctx, 4));
    // 0x180638: 0x902f8811  lbu         $t7, -0x77EF($at)
    ctx->pc = 0x180638u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936593)));
    // 0x18063c: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x18063cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x180640: 0x640c0006  daddiu      $t4, $zero, 0x6
    ctx->pc = 0x180640u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x180644: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180648: 0x1ea2024  and         $a0, $t7, $t2
    ctx->pc = 0x180648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) & GPR_U64(ctx, 10));
    // 0x18064c: 0xa02d87f2  sb          $t5, -0x780E($at)
    ctx->pc = 0x18064cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936562), (uint8_t)GPR_U32(ctx, 13));
    // 0x180650: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x180650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x180654: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180658: 0x240dffef  addiu       $t5, $zero, -0x11
    ctx->pc = 0x180658u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x18065c: 0xa0258810  sb          $a1, -0x77F0($at)
    ctx->pc = 0x18065cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368810u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368810u, _value); } while (0);
    // 0x180660: 0x240afff3  addiu       $t2, $zero, -0xD
    ctx->pc = 0x180660u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x180664: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180668: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x180668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18066c: 0xa0248811  sb          $a0, -0x77EF($at)
    ctx->pc = 0x18066cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368811u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368811u, _value); } while (0);
    // 0x180670: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180674: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x180674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x180678: 0x902b8810  lbu         $t3, -0x77F0($at)
    ctx->pc = 0x180678u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)FAST_READ8(0x368810u));
    // 0x18067c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18067cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180680: 0xa0258820  sb          $a1, -0x77E0($at)
    ctx->pc = 0x180680u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368820u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368820u, _value); } while (0);
    // 0x180684: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180688: 0xac248824  sw          $a0, -0x77DC($at)
    ctx->pc = 0x180688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368824u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368824u, _value); } while (0);
    // 0x18068c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18068cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180690: 0x1742024  and         $a0, $t3, $s4
    ctx->pc = 0x180690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 20));
    // 0x180694: 0xa0258821  sb          $a1, -0x77DF($at)
    ctx->pc = 0x180694u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936609), (uint8_t)GPR_U32(ctx, 5));
    // 0x180698: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x180698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x18069c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18069cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806a0: 0xa0258822  sb          $a1, -0x77DE($at)
    ctx->pc = 0x1806a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368822u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368822u, _value); } while (0);
    // 0x1806a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806a8: 0xa0258823  sb          $a1, -0x77DD($at)
    ctx->pc = 0x1806a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368823u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368823u, _value); } while (0);
    // 0x1806ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806b0: 0xa0258804  sb          $a1, -0x77FC($at)
    ctx->pc = 0x1806b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368804u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368804u, _value); } while (0);
    // 0x1806b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806b8: 0x90338811  lbu         $s3, -0x77EF($at)
    ctx->pc = 0x1806b8u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)FAST_READ8(0x368811u));
    // 0x1806bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806c0: 0x2789824  and         $s3, $s3, $t8
    ctx->pc = 0x1806c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 24));
    // 0x1806c4: 0xa0248810  sb          $a0, -0x77F0($at)
    ctx->pc = 0x1806c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936592), (uint8_t)GPR_U32(ctx, 4));
    // 0x1806c8: 0x2799825  or          $s3, $s3, $t9
    ctx->pc = 0x1806c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 25));
    // 0x1806cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806d0: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x1806d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1806d4: 0x902f8810  lbu         $t7, -0x77F0($at)
    ctx->pc = 0x1806d4u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x368810u));
    // 0x1806d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806dc: 0x1ed6824  and         $t5, $t7, $t5
    ctx->pc = 0x1806dcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x1806e0: 0x902b8800  lbu         $t3, -0x7800($at)
    ctx->pc = 0x1806e0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936576)));
    // 0x1806e4: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x1806e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x1806e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806ec: 0x1665824  and         $t3, $t3, $a2
    ctx->pc = 0x1806ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x1806f0: 0x90258830  lbu         $a1, -0x77D0($at)
    ctx->pc = 0x1806f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936624)));
    // 0x1806f4: 0x1765825  or          $t3, $t3, $s6
    ctx->pc = 0x1806f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 22));
    // 0x1806f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806fc: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1806fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x180700: 0xfc2487f8  sd          $a0, -0x7808($at)
    ctx->pc = 0x180700u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936568), GPR_U64(ctx, 4));
    // 0x180704: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x180704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x180708: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x180708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18070c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18070cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180710: 0xfc248808  sd          $a0, -0x77F8($at)
    ctx->pc = 0x180710u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368808u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368808u, _value); } while (0);
    // 0x180714: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x180714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x180718: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18071c: 0x90248840  lbu         $a0, -0x77C0($at)
    ctx->pc = 0x18071cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x368840u));
    // 0x180720: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180724: 0x942024  and         $a0, $a0, $s4
    ctx->pc = 0x180724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 20));
    // 0x180728: 0xa0338811  sb          $s3, -0x77EF($at)
    ctx->pc = 0x180728u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936593), (uint8_t)GPR_U32(ctx, 19));
    // 0x18072c: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x18072cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x180730: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180734: 0xa02d8810  sb          $t5, -0x77F0($at)
    ctx->pc = 0x180734u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x368810u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368810u, _value); } while (0);
    // 0x180738: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18073c: 0xa02b8800  sb          $t3, -0x7800($at)
    ctx->pc = 0x18073cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x368800u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368800u, _value); } while (0);
    // 0x180740: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180744: 0xa0268830  sb          $a2, -0x77D0($at)
    ctx->pc = 0x180744u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x368830u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368830u, _value); } while (0);
    // 0x180748: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18074c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18074cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x180750: 0xfc258838  sd          $a1, -0x77C8($at)
    ctx->pc = 0x180750u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368838u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368838u, _value); } while (0);
    // 0x180754: 0x24c687d0  addiu       $a2, $a2, -0x7830
    ctx->pc = 0x180754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936528));
    // 0x180758: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18075c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x18075cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x180760: 0xa0248840  sb          $a0, -0x77C0($at)
    ctx->pc = 0x180760u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368840u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368840u, _value); } while (0);
    // 0x180764: 0x24a50a90  addiu       $a1, $a1, 0xA90
    ctx->pc = 0x180764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2704));
    // 0x180768: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x180768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18076c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18076cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180770: 0xfc248848  sd          $a0, -0x77B8($at)
    ctx->pc = 0x180770u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368848u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368848u, _value); } while (0);
    // 0x180774: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180778: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x180778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x18077c: 0x90338811  lbu         $s3, -0x77EF($at)
    ctx->pc = 0x18077cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)FAST_READ8(0x368811u));
    // 0x180780: 0x248487e0  addiu       $a0, $a0, -0x7820
    ctx->pc = 0x180780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936544));
    // 0x180784: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180788: 0x2684024  and         $t0, $s3, $t0
    ctx->pc = 0x180788u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) & GPR_U64(ctx, 8));
    // 0x18078c: 0x902f8810  lbu         $t7, -0x77F0($at)
    ctx->pc = 0x18078cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936592)));
    // 0x180790: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x180790u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x180794: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180798: 0x1f71024  and         $v0, $t7, $s7
    ctx->pc = 0x180798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 23));
    // 0x18079c: 0x902e8800  lbu         $t6, -0x7800($at)
    ctx->pc = 0x18079cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936576)));
    // 0x1807a0: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x1807a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x1807a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1807a8: 0x902d8830  lbu         $t5, -0x77D0($at)
    ctx->pc = 0x1807a8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x368830u));
    // 0x1807ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1807b0: 0x942b8840  lhu         $t3, -0x77C0($at)
    ctx->pc = 0x1807b0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)FAST_READ16(0x368840u));
    // 0x1807b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1807b8: 0xa0288811  sb          $t0, -0x77EF($at)
    ctx->pc = 0x1807b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x368811u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368811u, _value); } while (0);
    // 0x1807bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1807c0: 0x1aa4024  and         $t0, $t5, $t2
    ctx->pc = 0x1807c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
    // 0x1807c4: 0xa0228810  sb          $v0, -0x77F0($at)
    ctx->pc = 0x1807c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1807c8: 0x1ca1024  and         $v0, $t6, $t2
    ctx->pc = 0x1807c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 10));
    // 0x1807cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1807d0: 0x5e6025  or          $t4, $v0, $fp
    ctx->pc = 0x1807d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x1807d4: 0x64020004  daddiu      $v0, $zero, 0x4
    ctx->pc = 0x1807d4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x1807d8: 0xa02c8800  sb          $t4, -0x7800($at)
    ctx->pc = 0x1807d8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936576), (uint8_t)GPR_U32(ctx, 12));
    // 0x1807dc: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1807dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1807e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1807e4: 0x2402fe3f  addiu       $v0, $zero, -0x1C1
    ctx->pc = 0x1807e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x1807e8: 0xa0288830  sb          $t0, -0x77D0($at)
    ctx->pc = 0x1807e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x368830u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368830u, _value); } while (0);
    // 0x1807ec: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x1807ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x1807f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1807f4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1807f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1807f8: 0xa4228840  sh          $v0, -0x77C0($at)
    ctx->pc = 0x1807f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368840u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368840u, _value); } while (0);
    // 0x1807fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180800: 0x90228800  lbu         $v0, -0x7800($at)
    ctx->pc = 0x180800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368800u));
    // 0x180804: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x180804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x180808: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18080c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x18080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x180810: 0xa0228800  sb          $v0, -0x7800($at)
    ctx->pc = 0x180810u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368800u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368800u, _value); } while (0);
    // 0x180814: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180818: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x180818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x18081c: 0x90238800  lbu         $v1, -0x7800($at)
    ctx->pc = 0x18081cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x368800u));
    // 0x180820: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x180820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x180824: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180828: 0x64020040  daddiu      $v0, $zero, 0x40
    ctx->pc = 0x180828u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x18082c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18082cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x180830: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x180830u;
    SET_GPR_U32(ctx, 31, 0x180838u);
    ctx->pc = 0x180834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180830u;
    // 0x180834: 0xa0228800  sb          $v0, -0x7800($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936576), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x180830u, 0x180838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180838u;
label_180838:
    // 0x180838: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x180838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18083c: 0xa3838674  sb          $v1, -0x798C($gp)
    ctx->pc = 0x18083cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936180), (uint8_t)GPR_U32(ctx, 3));
label_180840:
    // 0x180840: 0x83838678  lb          $v1, -0x7988($gp)
    ctx->pc = 0x180840u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936184)));
    // 0x180844: 0x14600053  bnez        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x180844u;
    {
        const bool branch_taken_0x180844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180844u;
        // 0x180848: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180844) {
            ctx->pc = 0x180994u;
            goto label_180994;
        }
    }
    ctx->pc = 0x18084Cu;
    // 0x18084c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x18084cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x180850: 0xa0208862  sb          $zero, -0x779E($at)
    ctx->pc = 0x180850u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936674), (uint8_t)GPR_U32(ctx, 0));
    // 0x180854: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x180854u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x180858: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x180858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18085c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18085cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180860: 0xa0228863  sb          $v0, -0x779D($at)
    ctx->pc = 0x180860u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368863u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368863u, _value); } while (0);
    // 0x180864: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x180864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x180868: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x180868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18086c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18086cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180870: 0xa4228860  sh          $v0, -0x77A0($at)
    ctx->pc = 0x180870u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368860u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368860u, _value); } while (0);
    // 0x180874: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x180874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x180878: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x180878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x18087c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18087cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180880: 0xac228868  sw          $v0, -0x7798($at)
    ctx->pc = 0x180880u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368868u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368868u, _value); } while (0);
    // 0x180884: 0x3487ffff  ori         $a3, $a0, 0xFFFF
    ctx->pc = 0x180884u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x180888: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18088c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x18088cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x180890: 0xac208864  sw          $zero, -0x779C($at)
    ctx->pc = 0x180890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368864u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368864u, _value); } while (0);
    // 0x180894: 0xe82025  or          $a0, $a3, $t0
    ctx->pc = 0x180894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x180898: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x180898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x18089c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18089cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1808a0: 0xac22886c  sw          $v0, -0x7794($at)
    ctx->pc = 0x1808a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36886Cu, _value); } while (0);
    // 0x1808a4: 0x70874389  pcpyld      $t0, $a0, $a3
    ctx->pc = 0x1808a4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x1808a8: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1808a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1808ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1808acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1808b0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1808b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1808b4: 0x300c3fff  andi        $t4, $zero, 0x3FFF
    ctx->pc = 0x1808b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)16383);
    // 0x1808b8: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1808b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1808bc: 0x64060100  daddiu      $a2, $zero, 0x100
    ctx->pc = 0x1808bcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)256);
    // 0x1808c0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1808c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1808c4: 0xfc238870  sd          $v1, -0x7790($at)
    ctx->pc = 0x1808c4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936688), GPR_U64(ctx, 3));
    // 0x1808c8: 0x24025353  addiu       $v0, $zero, 0x5353
    ctx->pc = 0x1808c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x1808cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1808ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1808d0: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x1808d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1808d4: 0xfc228878  sd          $v0, -0x7788($at)
    ctx->pc = 0x1808d4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368878u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368878u, _value); } while (0);
    // 0x1808d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1808d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1808dc: 0x64020010  daddiu      $v0, $zero, 0x10
    ctx->pc = 0x1808dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1808e0: 0x942b8880  lhu         $t3, -0x7780($at)
    ctx->pc = 0x1808e0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294936704)));
    // 0x1808e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1808e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1808e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1808e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1808ec: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1808ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1808f0: 0x942a8882  lhu         $t2, -0x777E($at)
    ctx->pc = 0x1808f0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294936706)));
    // 0x1808f4: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1808f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x1808f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1808f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1808fc: 0x1433824  and         $a3, $t2, $v1
    ctx->pc = 0x1808fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x180900: 0xdc298888  ld          $t1, -0x7778($at)
    ctx->pc = 0x180900u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 1), 4294936712)));
    // 0x180904: 0xec3825  or          $a3, $a3, $t4
    ctx->pc = 0x180904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 12));
    // 0x180908: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18090c: 0x94258890  lhu         $a1, -0x7770($at)
    ctx->pc = 0x18090cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x368890u));
    // 0x180910: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180914: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x180914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x180918: 0x94248892  lhu         $a0, -0x776E($at)
    ctx->pc = 0x180918u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294936722)));
    // 0x18091c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x18091cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x180920: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180924: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x180924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x180928: 0xa42b8880  sh          $t3, -0x7780($at)
    ctx->pc = 0x180928u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294936704), (uint16_t)GPR_U32(ctx, 11));
    // 0x18092c: 0x662025  or          $a0, $v1, $a2
    ctx->pc = 0x18092cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x180930: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180934: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x180934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x180938: 0xa4278882  sh          $a3, -0x777E($at)
    ctx->pc = 0x180938u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x368882u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368882u, _value); } while (0);
    // 0x18093c: 0x24c68850  addiu       $a2, $a2, -0x77B0
    ctx->pc = 0x18093cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936656));
    // 0x180940: 0x1283824  and         $a3, $t1, $t0
    ctx->pc = 0x180940u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x180944: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180948: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x180948u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18094c: 0xfc278888  sd          $a3, -0x7778($at)
    ctx->pc = 0x18094cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 7)); ps2TraceGuestWrite(rdram, 0x368888u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368888u, _value); } while (0);
    // 0x180950: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180954: 0xa4258890  sh          $a1, -0x7770($at)
    ctx->pc = 0x180954u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368890u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368890u, _value); } while (0);
    // 0x180958: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18095c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x18095cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x180960: 0xdc238898  ld          $v1, -0x7768($at)
    ctx->pc = 0x180960u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x368898u));
    // 0x180964: 0x24a50a40  addiu       $a1, $a1, 0xA40
    ctx->pc = 0x180964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2624));
    // 0x180968: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18096c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x18096cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x180970: 0xa4248892  sh          $a0, -0x776E($at)
    ctx->pc = 0x180970u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294936722), (uint16_t)GPR_U32(ctx, 4));
    // 0x180974: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x180974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x180978: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x180978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x18097c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18097cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180980: 0x24848860  addiu       $a0, $a0, -0x77A0
    ctx->pc = 0x180980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936672));
    // 0x180984: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x180984u;
    SET_GPR_U32(ctx, 31, 0x18098Cu);
    ctx->pc = 0x180988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180984u;
    // 0x180988: 0xfc228898  sd          $v0, -0x7768($at) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936728), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x180984u, 0x18098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18098Cu;
label_18098c:
    // 0x18098c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18098cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180990: 0xa3838678  sb          $v1, -0x7988($gp)
    ctx->pc = 0x180990u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936184), (uint8_t)GPR_U32(ctx, 3));
label_180994:
    // 0x180994: 0x83838680  lb          $v1, -0x7980($gp)
    ctx->pc = 0x180994u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936192)));
    // 0x180998: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x180998u;
    {
        const bool branch_taken_0x180998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180998u;
        // 0x18099c: 0x24040a00  addiu       $a0, $zero, 0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180998) {
            ctx->pc = 0x1809ACu;
            goto label_1809ac;
        }
    }
    ctx->pc = 0x1809A0u;
    // 0x1809a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1809a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1809a4: 0xaf84867c  sw          $a0, -0x7984($gp)
    ctx->pc = 0x1809a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936188), GPR_U32(ctx, 4));
    // 0x1809a8: 0xa3838680  sb          $v1, -0x7980($gp)
    ctx->pc = 0x1809a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936192), (uint8_t)GPR_U32(ctx, 3));
label_1809ac:
    // 0x1809ac: 0x8e46005c  lw          $a2, 0x5C($s2)
    ctx->pc = 0x1809acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1809b0: 0x104080  sll         $t0, $s0, 2
    ctx->pc = 0x1809b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1809b4: 0x8f84867c  lw          $a0, -0x7984($gp)
    ctx->pc = 0x1809b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936188)));
    // 0x1809b8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1809b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1809bc: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1809bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1809c0: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1809c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1809c4: 0x8cc700d0  lw          $a3, 0xD0($a2)
    ctx->pc = 0x1809c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x1809c8: 0x8ce60024  lw          $a2, 0x24($a3)
    ctx->pc = 0x1809c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1809cc: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1809ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1809d0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1809d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1809d4: 0xace40024  sw          $a0, 0x24($a3)
    ctx->pc = 0x1809d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 4));
    // 0x1809d8: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x1809d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1809dc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1809dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1809e0: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1809e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1809e4: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x1809e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x1809e8: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1809e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1809ec: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1809ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1809f0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1809f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x1809f4: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x1809f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1809f8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1809f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1809fc: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1809fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x180a00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x180a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x180a04: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x180a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x180a08: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x180a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_180a0c:
    // 0x180a0c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x180a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x180a10: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x180a10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x180a14: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x180a14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180a18: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x180a18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180a1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x180a1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180a20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x180a20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180a24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x180a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180a28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180a34: 0x3e00008  jr          $ra
    ctx->pc = 0x180A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A34u;
        // 0x180a38: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180A3Cu;
}
