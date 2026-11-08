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

// Function: FUN_001f32a0
// Address: 0x1f32a0 - 0x1f34c4
void FUN_001f32a0_0x1f32a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f32a0_0x1f32a0");
#endif

    switch (ctx->pc) {
        case 0x1f32d8u: goto label_1f32d8;
        case 0x1f32e8u: goto label_1f32e8;
        case 0x1f3310u: goto label_1f3310;
        case 0x1f3348u: goto label_1f3348;
        case 0x1f33b0u: goto label_1f33b0;
        case 0x1f3440u: goto label_1f3440;
        case 0x1f3484u: goto label_1f3484;
        default: break;
    }

    ctx->pc = 0x1f32a0u;

    // 0x1f32a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f32a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f32a4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f32a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f32a8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f32a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f32ac: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f32acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f32b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f32b4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1f32b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32b8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f32b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f32bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f32bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f32c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f32c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f32c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f32c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1f32cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f32ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32d0: 0xc07cab2  jal         func_1F2AC8
    ctx->pc = 0x1F32D0u;
    SET_GPR_U32(ctx, 31, 0x1F32D8u);
    ctx->pc = 0x1F32D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F32D0u;
    // 0x1f32d4: 0xffb50060  sd          $s5, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2AC8u, 0x1F32D0u, 0x1F32D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F32D8u;
label_1f32d8:
    // 0x1f32d8: 0x4400071  bltz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1F32D8u;
    {
        const bool branch_taken_0x1f32d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32D8u;
        // 0x1f32dc: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f32d8) {
            ctx->pc = 0x1F34A0u;
            goto label_1f34a0;
        }
    }
    ctx->pc = 0x1F32E0u;
    // 0x1f32e0: 0xc07caf2  jal         func_1F2BC8
    ctx->pc = 0x1F32E0u;
    SET_GPR_U32(ctx, 31, 0x1F32E8u);
    ctx->pc = 0x1F2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2BC8u, 0x1F32E0u, 0x1F32E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F32E8u;
label_1f32e8:
    // 0x1f32e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F32E8u;
    {
        const bool branch_taken_0x1f32e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f32e8) {
            ctx->pc = 0x1F32ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F32E8u;
            // 0x1f32ec: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F32FCu;
            goto label_1f32fc;
        }
    }
    ctx->pc = 0x1F32F0u;
    // 0x1f32f0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f32f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f32f4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1F32F4u;
    {
        const bool branch_taken_0x1f32f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F32F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32F4u;
        // 0x1f32f8: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f32f4) {
            ctx->pc = 0x1F34A0u;
            goto label_1f34a0;
        }
    }
    ctx->pc = 0x1F32FCu;
label_1f32fc:
    // 0x1f32fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f32fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3300: 0x2451fb88  addiu       $s1, $v0, -0x478
    ctx->pc = 0x1f3300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966152));
    // 0x1f3304: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1f3304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1f3308: 0xc080804  jal         func_202010
    ctx->pc = 0x1F3308u;
    SET_GPR_U32(ctx, 31, 0x1F3310u);
    ctx->pc = 0x1F330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3308u;
    // 0x1f330c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F3308u, 0x1F3310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3310u;
label_1f3310:
    // 0x1f3310: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x1f3310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x1f3314: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1F3314u;
    {
        const bool branch_taken_0x1f3314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3314u;
        // 0x1f3318: 0xa0400103  sb          $zero, 0x103($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 259), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3314) {
            ctx->pc = 0x1F3448u;
            goto label_1f3448;
        }
    }
    ctx->pc = 0x1F331Cu;
    // 0x1f331c: 0x2a4200fd  slti        $v0, $s2, 0xFD
    ctx->pc = 0x1f331cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x1f3320: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1F3320u;
    {
        const bool branch_taken_0x1f3320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3320u;
        // 0x1f3324: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3320) {
            ctx->pc = 0x1F3430u;
            goto label_1f3430;
        }
    }
    ctx->pc = 0x1F3328u;
    // 0x1f3328: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1f3328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x1f332c: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1f332cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1f3330: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1f3330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f3334: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F3334u;
    {
        const bool branch_taken_0x1f3334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3334u;
        // 0x1f3338: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3334) {
            ctx->pc = 0x1F33A4u;
            goto label_1f33a4;
        }
    }
    ctx->pc = 0x1F333Cu;
    // 0x1f333c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1f333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1f3340: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f3340u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f3344: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f3344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_1f3348:
    // 0x1f3348: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1f3348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f334c: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1f334cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f3350: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1f3350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1f3354: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1f3354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1f3358: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1f3358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f335c: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1f335cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f3360: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x1f3360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1f3364: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x1f3364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1f3368: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1f3368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f336c: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1f336cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3370: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1f3370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3374: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1f3374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3378: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1f3378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f337c: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1f337cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3380: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x1f3380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3384: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x1f3384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3388: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f3388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1f338c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f338cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f3390: 0x0  nop
    ctx->pc = 0x1f3390u;
    // NOP
    // 0x1f3394: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1F3394u;
    {
        const bool branch_taken_0x1f3394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3394) {
            ctx->pc = 0x1F3348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3348;
        }
    }
    ctx->pc = 0x1F339Cu;
    // 0x1f339c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F339Cu;
    {
        const bool branch_taken_0x1f339c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f339c) {
            ctx->pc = 0x1F33E4u;
            goto label_1f33e4;
        }
    }
    ctx->pc = 0x1F33A4u;
label_1f33a4:
    // 0x1f33a4: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1f33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1f33a8: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f33a8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f33ac: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f33acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_1f33b0:
    // 0x1f33b0: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1f33b0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f33b4: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1f33b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f33b8: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1f33b8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1f33bc: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x1f33bcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1f33c0: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1f33c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1f33c4: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1f33c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1f33c8: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1f33c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x1f33cc: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1f33ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1f33d0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f33d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1f33d4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f33d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f33d8: 0x0  nop
    ctx->pc = 0x1f33d8u;
    // NOP
    // 0x1f33dc: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F33DCu;
    {
        const bool branch_taken_0x1f33dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f33dc) {
            ctx->pc = 0x1F33B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f33b0;
        }
    }
    ctx->pc = 0x1F33E4u;
label_1f33e4:
    // 0x1f33e4: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1f33e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f33e8: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1f33e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f33ec: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1f33ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1f33f0: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1f33f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1f33f4: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1f33f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f33f8: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1f33f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f33fc: 0x8869001b  lwl         $t1, 0x1B($v1)
    ctx->pc = 0x1f33fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x1f3400: 0x98690018  lwr         $t1, 0x18($v1)
    ctx->pc = 0x1f3400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x1f3404: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1f3404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3408: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1f3408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f340c: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1f340cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3410: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1f3410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3414: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1f3414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3418: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1f3418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f341c: 0xa889001b  swl         $t1, 0x1B($a0)
    ctx->pc = 0x1f341cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1f3420: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1f3420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1f3424: 0xb8890018  swr         $t1, 0x18($a0)
    ctx->pc = 0x1f3424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1f3428: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F3428u;
    {
        const bool branch_taken_0x1f3428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3428u;
        // 0x1f342c: 0xaea2fb80  sw          $v0, -0x480($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294966144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3428) {
            ctx->pc = 0x1F3458u;
            goto label_1f3458;
        }
    }
    ctx->pc = 0x1F3430u;
label_1f3430:
    // 0x1f3430: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1f3430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x1f3434: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f3434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3438: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1F3438u;
    SET_GPR_U32(ctx, 31, 0x1F3440u);
    ctx->pc = 0x1F343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3438u;
    // 0x1f343c: 0x3c150039  lui         $s5, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1F3438u, 0x1F3440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3440u;
label_1f3440:
    // 0x1f3440: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3440u;
    {
        const bool branch_taken_0x1f3440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3440u;
        // 0x1f3444: 0xae32fff8  sw          $s2, -0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3440) {
            ctx->pc = 0x1F3454u;
            goto label_1f3454;
        }
    }
    ctx->pc = 0x1F3448u;
label_1f3448:
    // 0x1f3448: 0xa0400104  sb          $zero, 0x104($v0)
    ctx->pc = 0x1f3448u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 260), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f344c: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f344cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f3450: 0xae20fff8  sw          $zero, -0x8($s1)
    ctx->pc = 0x1f3450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 0));
label_1f3454:
    // 0x1f3454: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f3454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_1f3458:
    // 0x1f3458: 0x26b0fb80  addiu       $s0, $s5, -0x480
    ctx->pc = 0x1f3458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966144));
    // 0x1f345c: 0x24a4fd80  addiu       $a0, $a1, -0x280
    ctx->pc = 0x1f345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966656));
    // 0x1f3460: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f3460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3464: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f3464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f3468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f346c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f346cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3470: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1f3470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1f3474: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f3474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3478: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1f3478u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f347c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F347Cu;
    SET_GPR_U32(ctx, 31, 0x1F3484u);
    ctx->pc = 0x1F3480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F347Cu;
    // 0x1f3480: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F347Cu, 0x1F3484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3484u;
label_1f3484:
    // 0x1f3484: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3484u;
    {
        const bool branch_taken_0x1f3484 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f3484) {
            ctx->pc = 0x1F3488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3484u;
            // 0x1f3488: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3498u;
            goto label_1f3498;
        }
    }
    ctx->pc = 0x1F348Cu;
    // 0x1f348c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f348cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f3490: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3490u;
    {
        const bool branch_taken_0x1f3490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3490u;
        // 0x1f3494: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3490) {
            ctx->pc = 0x1F34A0u;
            goto label_1f34a0;
        }
    }
    ctx->pc = 0x1F3498u;
label_1f3498:
    // 0x1f3498: 0x8ea2fb80  lw          $v0, -0x480($s5)
    ctx->pc = 0x1f3498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294966144)));
    // 0x1f349c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1f349cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1f34a0:
    // 0x1f34a0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f34a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f34a4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f34a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f34a8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f34a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f34ac: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f34acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f34b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f34b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f34b4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f34b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f34b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f34b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f34bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F34BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34BCu;
        // 0x1f34c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F34BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F34C4u;
}
