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

// Function: FUN_001f9420
// Address: 0x1f9420 - 0x1f95e8
void FUN_001f9420_0x1f9420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f9420_0x1f9420");
#endif

    switch (ctx->pc) {
        case 0x1f9480u: goto label_1f9480;
        case 0x1f94a4u: goto label_1f94a4;
        case 0x1f9560u: goto label_1f9560;
        case 0x1f956cu: goto label_1f956c;
        case 0x1f9598u: goto label_1f9598;
        case 0x1f95b8u: goto label_1f95b8;
        default: break;
    }

    ctx->pc = 0x1f9420u;

    // 0x1f9420: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f9420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f9424: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f9424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f9428: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1f9428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1f942c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f9430: 0x24571600  addiu       $s7, $v0, 0x1600
    ctx->pc = 0x1f9430u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1f9434: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f9434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f9438: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1f9438u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f943c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f943cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f9440: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f9440u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9444: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f9444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f9448: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f9448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f944c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f944cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f9450: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f9450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9454: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f9454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1f9458: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f9458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1f945c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f945cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f9460: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x1f9460u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x391624u));
    // 0x1f9464: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9464u;
    {
        const bool branch_taken_0x1f9464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9464u;
        // 0x1f9468: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9464) {
            ctx->pc = 0x1F9474u;
            goto label_1f9474;
        }
    }
    ctx->pc = 0x1F946Cu;
    // 0x1f946c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1F946Cu;
    {
        const bool branch_taken_0x1f946c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F946Cu;
        // 0x1f9470: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f946c) {
            ctx->pc = 0x1F95BCu;
            goto label_1f95bc;
        }
    }
    ctx->pc = 0x1F9474u;
label_1f9474:
    // 0x1f9474: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1f9474u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1f9478: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F9478u;
    SET_GPR_U32(ctx, 31, 0x1F9480u);
    ctx->pc = 0x1F947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9478u;
    // 0x1f947c: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F9478u, 0x1F9480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9480u;
label_1f9480:
    // 0x1f9480: 0x440004e  bltz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1F9480u;
    {
        const bool branch_taken_0x1f9480 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9480u;
        // 0x1f9484: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9480) {
            ctx->pc = 0x1F95BCu;
            goto label_1f95bc;
        }
    }
    ctx->pc = 0x1F9488u;
    // 0x1f9488: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9488u;
    {
        const bool branch_taken_0x1f9488 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9488) {
            ctx->pc = 0x1F949Cu;
            goto label_1f949c;
        }
    }
    ctx->pc = 0x1F9490u;
    // 0x1f9490: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1f9490u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f9494: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9494u;
    {
        const bool branch_taken_0x1f9494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9494u;
        // 0x1f9498: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9494) {
            ctx->pc = 0x1F94ACu;
            goto label_1f94ac;
        }
    }
    ctx->pc = 0x1F949Cu;
label_1f949c:
    // 0x1f949c: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F949Cu;
    SET_GPR_U32(ctx, 31, 0x1F94A4u);
    ctx->pc = 0x1F94A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F949Cu;
    // 0x1f94a0: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F949Cu, 0x1F94A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94A4u;
label_1f94a4:
    // 0x1f94a4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1F94A4u;
    {
        const bool branch_taken_0x1f94a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94A4u;
        // 0x1f94a8: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94a4) {
            ctx->pc = 0x1F95BCu;
            goto label_1f95bc;
        }
    }
    ctx->pc = 0x1F94ACu;
label_1f94ac:
    // 0x1f94ac: 0x32310007  andi        $s1, $s1, 0x7
    ctx->pc = 0x1f94acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x1f94b0: 0x245016b0  addiu       $s0, $v0, 0x16B0
    ctx->pc = 0x1f94b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5808));
    // 0x1f94b4: 0xac5416b0  sw          $s4, 0x16B0($v0)
    ctx->pc = 0x1f94b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5808), GPR_U32(ctx, 20));
    // 0x1f94b8: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1f94b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1f94bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f94c0: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1f94c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x1f94c4: 0x24431640  addiu       $v1, $v0, 0x1640
    ctx->pc = 0x1f94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5696));
    // 0x1f94c8: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1f94c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1f94cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f94ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94d0: 0x24491640  addiu       $t1, $v0, 0x1640
    ctx->pc = 0x1f94d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 5696));
    // 0x1f94d4: 0x6ac60007  ldl         $a2, 0x7($s6)
    ctx->pc = 0x1f94d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f94d8: 0x6ec60000  ldr         $a2, 0x0($s6)
    ctx->pc = 0x1f94d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f94dc: 0x6ac7000f  ldl         $a3, 0xF($s6)
    ctx->pc = 0x1f94dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1f94e0: 0x6ec70008  ldr         $a3, 0x8($s6)
    ctx->pc = 0x1f94e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1f94e4: 0x6ac80017  ldl         $t0, 0x17($s6)
    ctx->pc = 0x1f94e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f94e8: 0x6ec80010  ldr         $t0, 0x10($s6)
    ctx->pc = 0x1f94e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f94ec: 0xb1260007  sdl         $a2, 0x7($t1)
    ctx->pc = 0x1f94ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f94f0: 0xb5260000  sdr         $a2, 0x0($t1)
    ctx->pc = 0x1f94f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f94f4: 0xb127000f  sdl         $a3, 0xF($t1)
    ctx->pc = 0x1f94f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f94f8: 0xb5270008  sdr         $a3, 0x8($t1)
    ctx->pc = 0x1f94f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f94fc: 0xb1280017  sdl         $t0, 0x17($t1)
    ctx->pc = 0x1f94fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f9500: 0xb5280010  sdr         $t0, 0x10($t1)
    ctx->pc = 0x1f9500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f9504: 0x6ac6001f  ldl         $a2, 0x1F($s6)
    ctx->pc = 0x1f9504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f9508: 0x6ec60018  ldr         $a2, 0x18($s6)
    ctx->pc = 0x1f9508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f950c: 0x6ac70027  ldl         $a3, 0x27($s6)
    ctx->pc = 0x1f950cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1f9510: 0x6ec70020  ldr         $a3, 0x20($s6)
    ctx->pc = 0x1f9510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1f9514: 0x6ac8002f  ldl         $t0, 0x2F($s6)
    ctx->pc = 0x1f9514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f9518: 0x6ec80028  ldr         $t0, 0x28($s6)
    ctx->pc = 0x1f9518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f951c: 0xb126001f  sdl         $a2, 0x1F($t1)
    ctx->pc = 0x1f951cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f9520: 0xb5260018  sdr         $a2, 0x18($t1)
    ctx->pc = 0x1f9520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f9524: 0xb1270027  sdl         $a3, 0x27($t1)
    ctx->pc = 0x1f9524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f9528: 0xb5270020  sdr         $a3, 0x20($t1)
    ctx->pc = 0x1f9528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f952c: 0xb128002f  sdl         $t0, 0x2F($t1)
    ctx->pc = 0x1f952cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f9530: 0xb5280028  sdr         $t0, 0x28($t1)
    ctx->pc = 0x1f9530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f9534: 0x6ac60037  ldl         $a2, 0x37($s6)
    ctx->pc = 0x1f9534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f9538: 0x6ec60030  ldr         $a2, 0x30($s6)
    ctx->pc = 0x1f9538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f953c: 0x6ac7003f  ldl         $a3, 0x3F($s6)
    ctx->pc = 0x1f953cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1f9540: 0x6ec70038  ldr         $a3, 0x38($s6)
    ctx->pc = 0x1f9540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1f9544: 0xb1260037  sdl         $a2, 0x37($t1)
    ctx->pc = 0x1f9544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f9548: 0xb5260030  sdr         $a2, 0x30($t1)
    ctx->pc = 0x1f9548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f954c: 0xb127003f  sdl         $a3, 0x3F($t1)
    ctx->pc = 0x1f954cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f9550: 0xb5270038  sdr         $a3, 0x38($t1)
    ctx->pc = 0x1f9550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f9554: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1f9554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1f9558: 0xc080804  jal         func_202010
    ctx->pc = 0x1F9558u;
    SET_GPR_U32(ctx, 31, 0x1F9560u);
    ctx->pc = 0x1F955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9558u;
    // 0x1f955c: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F9558u, 0x1F9560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9560u;
label_1f9560:
    // 0x1f9560: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x1f9560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9564: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1F9564u;
    SET_GPR_U32(ctx, 31, 0x1F956Cu);
    ctx->pc = 0x1F9568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9564u;
    // 0x1f9568: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1F9564u, 0x1F956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F956Cu;
label_1f956c:
    // 0x1f956c: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f956cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f9570: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f9570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9574: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f9574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9578: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f9578u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f957c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f957cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f9580: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1f9580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f9584: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9588: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1f9588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1f958c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f958cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f9590: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F9590u;
    SET_GPR_U32(ctx, 31, 0x1F9598u);
    ctx->pc = 0x1F9594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9590u;
    // 0x1f9594: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F9590u, 0x1F9598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9598u;
label_1f9598:
    // 0x1f9598: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f959c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F959Cu;
    {
        const bool branch_taken_0x1f959c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F959Cu;
        // 0x1f95a0: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f959c) {
            ctx->pc = 0x1F95B0u;
            goto label_1f95b0;
        }
    }
    ctx->pc = 0x1F95A4u;
    // 0x1f95a4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1f95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f95a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F95A8u;
    {
        const bool branch_taken_0x1f95a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95A8u;
        // 0x1f95ac: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95a8) {
            ctx->pc = 0x1F95B8u;
            goto label_1f95b8;
        }
    }
    ctx->pc = 0x1F95B0u;
label_1f95b0:
    // 0x1f95b0: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F95B0u;
    SET_GPR_U32(ctx, 31, 0x1F95B8u);
    ctx->pc = 0x1F95B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F95B0u;
    // 0x1f95b4: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F95B0u, 0x1F95B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F95B8u;
label_1f95b8:
    // 0x1f95b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f95b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f95bc:
    // 0x1f95bc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f95bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f95c0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1f95c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f95c4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f95c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f95c8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f95c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f95cc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f95ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f95d0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f95d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f95d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f95d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f95d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f95d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f95dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f95dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f95e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F95E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95E0u;
        // 0x1f95e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F95E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F95E8u;
}
