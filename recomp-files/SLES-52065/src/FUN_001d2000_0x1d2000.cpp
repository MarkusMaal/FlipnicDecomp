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

// Function: FUN_001d2000
// Address: 0x1d2000 - 0x1d2318
void FUN_001d2000_0x1d2000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2000_0x1d2000");
#endif

    switch (ctx->pc) {
        case 0x1d2028u: goto label_1d2028;
        case 0x1d2040u: goto label_1d2040;
        case 0x1d2050u: goto label_1d2050;
        case 0x1d2088u: goto label_1d2088;
        case 0x1d20a0u: goto label_1d20a0;
        case 0x1d20b0u: goto label_1d20b0;
        case 0x1d20d4u: goto label_1d20d4;
        case 0x1d20f8u: goto label_1d20f8;
        case 0x1d2124u: goto label_1d2124;
        case 0x1d2134u: goto label_1d2134;
        case 0x1d2144u: goto label_1d2144;
        case 0x1d2158u: goto label_1d2158;
        case 0x1d2168u: goto label_1d2168;
        case 0x1d2194u: goto label_1d2194;
        case 0x1d21a8u: goto label_1d21a8;
        case 0x1d21b8u: goto label_1d21b8;
        case 0x1d21d8u: goto label_1d21d8;
        case 0x1d21e8u: goto label_1d21e8;
        case 0x1d2210u: goto label_1d2210;
        case 0x1d2220u: goto label_1d2220;
        case 0x1d2234u: goto label_1d2234;
        case 0x1d2244u: goto label_1d2244;
        case 0x1d2268u: goto label_1d2268;
        case 0x1d2278u: goto label_1d2278;
        case 0x1d2288u: goto label_1d2288;
        case 0x1d22a8u: goto label_1d22a8;
        case 0x1d22b8u: goto label_1d22b8;
        case 0x1d22e0u: goto label_1d22e0;
        default: break;
    }

    ctx->pc = 0x1d2000u;

    // 0x1d2000: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d2000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d2004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d2004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d2008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d200c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d200cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2010: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2010u;
    {
        const bool branch_taken_0x1d2010 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2010u;
        // 0x1d2014: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2010) {
            ctx->pc = 0x1D2030u;
            goto label_1d2030;
        }
    }
    ctx->pc = 0x1D2018u;
    // 0x1d2018: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d2018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d201c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d201cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2020: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D2020u;
    SET_GPR_U32(ctx, 31, 0x1D2028u);
    ctx->pc = 0x1D2024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2020u;
    // 0x1d2024: 0x2484fe60  addiu       $a0, $a0, -0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D2020u, 0x1D2028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2028u;
label_1d2028:
    // 0x1d2028: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d202c: 0xac20fea0  sw          $zero, -0x160($at)
    ctx->pc = 0x1d202cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36FEA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FEA0u, _value); } while (0);
label_1d2030:
    // 0x1d2030: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2034: 0x8c25fea0  lw          $a1, -0x160($at)
    ctx->pc = 0x1d2034u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36FEA0u));
    // 0x1d2038: 0xc074b7c  jal         func_1D2DF0
    ctx->pc = 0x1D2038u;
    SET_GPR_U32(ctx, 31, 0x1D2040u);
    ctx->pc = 0x1D203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2038u;
    // 0x1d203c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2DF0u, 0x1D2038u, 0x1D2040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2040u;
label_1d2040:
    // 0x1d2040: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1D2040u;
    {
        const bool branch_taken_0x1d2040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2040) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D2048u;
    // 0x1d2048: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1D2048u;
    SET_GPR_U32(ctx, 31, 0x1D2050u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1D2048u, 0x1D2050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2050u;
label_1d2050:
    // 0x1d2050: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2054: 0x8c25fea0  lw          $a1, -0x160($at)
    ctx->pc = 0x1d2054u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36FEA0u));
    // 0x1d2058: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x1d2058u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d205c: 0x102000a9  beqz        $at, . + 4 + (0xA9 << 2)
    ctx->pc = 0x1D205Cu;
    {
        const bool branch_taken_0x1d205c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D205Cu;
        // 0x1d2060: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d205c) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D2064u;
    // 0x1d2064: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1d2064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1d2068: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1d2068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d206c: 0x24843530  addiu       $a0, $a0, 0x3530
    ctx->pc = 0x1d206cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13616));
    // 0x1d2070: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2074: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d2074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2078: 0x600008  jr          $v1
    ctx->pc = 0x1D2078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2080u: goto label_1d2080;
            case 0x1D20E0u: goto label_1d20e0;
            case 0x1D20F0u: goto label_1d20f0;
            case 0x1D2114u: goto label_1d2114;
            case 0x1D2180u: goto label_1d2180;
            case 0x1D21D0u: goto label_1d21d0;
            case 0x1D2200u: goto label_1d2200;
            case 0x1D225Cu: goto label_1d225c;
            case 0x1D22A0u: goto label_1d22a0;
            case 0x1D22D0u: goto label_1d22d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2078u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D2080u;
label_1d2080:
    // 0x1d2080: 0xc0749d0  jal         func_1D2740
    ctx->pc = 0x1D2080u;
    SET_GPR_U32(ctx, 31, 0x1D2088u);
    ctx->pc = 0x1D2084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2080u;
    // 0x1d2084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2740u, 0x1D2080u, 0x1D2088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2088u;
label_1d2088:
    // 0x1d2088: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x1D2088u;
    {
        const bool branch_taken_0x1d2088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2088u;
        // 0x1d208c: 0x3c060037  lui         $a2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2088) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D2090u;
    // 0x1d2090: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2098: 0xc07e17c  jal         func_1F85F0
    ctx->pc = 0x1D2098u;
    SET_GPR_U32(ctx, 31, 0x1D20A0u);
    ctx->pc = 0x1D209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2098u;
    // 0x1d209c: 0x24c6fe60  addiu       $a2, $a2, -0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F85F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F85F0u, 0x1D2098u, 0x1D20A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D20A0u;
label_1d20a0:
    // 0x1d20a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d20a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d20a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d20a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d20a8: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D20A8u;
    SET_GPR_U32(ctx, 31, 0x1D20B0u);
    ctx->pc = 0x1D20ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D20A8u;
    // 0x1d20ac: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D20A8u, 0x1D20B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D20B0u;
label_1d20b0:
    // 0x1d20b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d20b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d20b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d20b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d20b8: 0x8c22fea0  lw          $v0, -0x160($at)
    ctx->pc = 0x1d20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36FEA0u));
    // 0x1d20bc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d20bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d20c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d20c4: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d20c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d20c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d20c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d20cc: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1D20CCu;
    SET_GPR_U32(ctx, 31, 0x1D20D4u);
    ctx->pc = 0x1D20D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D20CCu;
    // 0x1d20d0: 0xac22fea0  sw          $v0, -0x160($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1D20CCu, 0x1D20D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D20D4u;
label_1d20d4:
    // 0x1d20d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d20d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d20d8: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1D20D8u;
    {
        const bool branch_taken_0x1d20d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20D8u;
        // 0x1d20dc: 0xac22fea8  sw          $v0, -0x158($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20d8) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D20E0u;
label_1d20e0:
    // 0x1d20e0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1d20e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d20e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d20e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d20e8: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1D20E8u;
    {
        const bool branch_taken_0x1d20e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20E8u;
        // 0x1d20ec: 0xac23fea0  sw          $v1, -0x160($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20e8) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D20F0u;
label_1d20f0:
    // 0x1d20f0: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1D20F0u;
    SET_GPR_U32(ctx, 31, 0x1D20F8u);
    ctx->pc = 0x1D20F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D20F0u;
    // 0x1d20f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1D20F0u, 0x1D20F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D20F8u;
label_1d20f8:
    // 0x1d20f8: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x1D20F8u;
    {
        const bool branch_taken_0x1d20f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20F8u;
        // 0x1d20fc: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20f8) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D2100u;
    // 0x1d2100: 0x8c23fea0  lw          $v1, -0x160($at)
    ctx->pc = 0x1d2100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966944)));
    // 0x1d2104: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2108: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d210c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1D210Cu;
    {
        const bool branch_taken_0x1d210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D210Cu;
        // 0x1d2110: 0xac23fea0  sw          $v1, -0x160($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d210c) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D2114u;
label_1d2114:
    // 0x1d2114: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d2114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d2118: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d2118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d211c: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D211Cu;
    SET_GPR_U32(ctx, 31, 0x1D2124u);
    ctx->pc = 0x1D2120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D211Cu;
    // 0x1d2120: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D211Cu, 0x1D2124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2124u;
label_1d2124:
    // 0x1d2124: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d2124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d2128: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d2128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d212c: 0xc080664  jal         func_201990
    ctx->pc = 0x1D212Cu;
    SET_GPR_U32(ctx, 31, 0x1D2134u);
    ctx->pc = 0x1D2130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D212Cu;
    // 0x1d2130: 0x24a53518  addiu       $a1, $a1, 0x3518 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D212Cu, 0x1D2134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2134u;
label_1d2134:
    // 0x1d2134: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d2134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d2138: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d2138u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d213c: 0xc080664  jal         func_201990
    ctx->pc = 0x1D213Cu;
    SET_GPR_U32(ctx, 31, 0x1D2144u);
    ctx->pc = 0x1D2140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D213Cu;
    // 0x1d2140: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D213Cu, 0x1D2144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2144u;
label_1d2144:
    // 0x1d2144: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d214c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1d214cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2150: 0xc07e132  jal         func_1F84C8
    ctx->pc = 0x1D2150u;
    SET_GPR_U32(ctx, 31, 0x1D2158u);
    ctx->pc = 0x1D2154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2150u;
    // 0x1d2154: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F84C8u, 0x1D2150u, 0x1D2158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2158u;
label_1d2158:
    // 0x1d2158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d215c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d215cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2160: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2160u;
    SET_GPR_U32(ctx, 31, 0x1D2168u);
    ctx->pc = 0x1D2164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2160u;
    // 0x1d2164: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2160u, 0x1D2168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2168u;
label_1d2168:
    // 0x1d2168: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d216c: 0x8c23fea0  lw          $v1, -0x160($at)
    ctx->pc = 0x1d216cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEA0u));
    // 0x1d2170: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2174: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2178: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1D2178u;
    {
        const bool branch_taken_0x1d2178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2178u;
        // 0x1d217c: 0xac23fea0  sw          $v1, -0x160($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2178) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D2180u;
label_1d2180:
    // 0x1d2180: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d2180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d2184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2188: 0x8e300044  lw          $s0, 0x44($s1)
    ctx->pc = 0x1d2188u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1d218c: 0xc047988  jal         func_11E620
    ctx->pc = 0x1D218Cu;
    SET_GPR_U32(ctx, 31, 0x1D2194u);
    ctx->pc = 0x1D2190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D218Cu;
    // 0x1d2190: 0x8c259a70  lw          $a1, -0x6590($at) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E620u, 0x1D218Cu, 0x1D2194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2194u;
label_1d2194:
    // 0x1d2194: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d219c: 0x8c25fea8  lw          $a1, -0x158($at)
    ctx->pc = 0x1d219cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36FEA8u));
    // 0x1d21a0: 0xc07e258  jal         func_1F8960
    ctx->pc = 0x1D21A0u;
    SET_GPR_U32(ctx, 31, 0x1D21A8u);
    ctx->pc = 0x1D21A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D21A0u;
    // 0x1d21a4: 0x240635e0  addiu       $a2, $zero, 0x35E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8960u, 0x1D21A0u, 0x1D21A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D21A8u;
label_1d21a8:
    // 0x1d21a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d21a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d21ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d21acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d21b0: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D21B0u;
    SET_GPR_U32(ctx, 31, 0x1D21B8u);
    ctx->pc = 0x1D21B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D21B0u;
    // 0x1d21b4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D21B0u, 0x1D21B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D21B8u;
label_1d21b8:
    // 0x1d21b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d21b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d21bc: 0x8c23fea0  lw          $v1, -0x160($at)
    ctx->pc = 0x1d21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEA0u));
    // 0x1d21c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d21c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d21c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d21c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d21c8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1D21C8u;
    {
        const bool branch_taken_0x1d21c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21C8u;
        // 0x1d21cc: 0xac23fea0  sw          $v1, -0x160($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21c8) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D21D0u;
label_1d21d0:
    // 0x1d21d0: 0xc07e18a  jal         func_1F8628
    ctx->pc = 0x1D21D0u;
    SET_GPR_U32(ctx, 31, 0x1D21D8u);
    ctx->pc = 0x1D21D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D21D0u;
    // 0x1d21d4: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8628u, 0x1D21D0u, 0x1D21D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D21D8u;
label_1d21d8:
    // 0x1d21d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d21d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d21dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d21dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d21e0: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D21E0u;
    SET_GPR_U32(ctx, 31, 0x1D21E8u);
    ctx->pc = 0x1D21E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D21E0u;
    // 0x1d21e4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D21E0u, 0x1D21E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D21E8u;
label_1d21e8:
    // 0x1d21e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d21e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d21ec: 0x8c23fea0  lw          $v1, -0x160($at)
    ctx->pc = 0x1d21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEA0u));
    // 0x1d21f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d21f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d21f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d21f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d21f8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1D21F8u;
    {
        const bool branch_taken_0x1d21f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21F8u;
        // 0x1d21fc: 0xac23fea0  sw          $v1, -0x160($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21f8) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D2200u;
label_1d2200:
    // 0x1d2200: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d2200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d2204: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d2204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2208: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D2208u;
    SET_GPR_U32(ctx, 31, 0x1D2210u);
    ctx->pc = 0x1D220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2208u;
    // 0x1d220c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D2208u, 0x1D2210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2210u;
label_1d2210:
    // 0x1d2210: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d2210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d2214: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d2214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2218: 0xc080664  jal         func_201990
    ctx->pc = 0x1D2218u;
    SET_GPR_U32(ctx, 31, 0x1D2220u);
    ctx->pc = 0x1D221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2218u;
    // 0x1d221c: 0x24a53520  addiu       $a1, $a1, 0x3520 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D2218u, 0x1D2220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2220u;
label_1d2220:
    // 0x1d2220: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2228: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1d2228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d222c: 0xc07e132  jal         func_1F84C8
    ctx->pc = 0x1D222Cu;
    SET_GPR_U32(ctx, 31, 0x1D2234u);
    ctx->pc = 0x1D2230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D222Cu;
    // 0x1d2230: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F84C8u, 0x1D222Cu, 0x1D2234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2234u;
label_1d2234:
    // 0x1d2234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2238: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d223c: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D223Cu;
    SET_GPR_U32(ctx, 31, 0x1D2244u);
    ctx->pc = 0x1D2240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D223Cu;
    // 0x1d2240: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D223Cu, 0x1D2244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2244u;
label_1d2244:
    // 0x1d2244: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2248: 0x8c23fea0  lw          $v1, -0x160($at)
    ctx->pc = 0x1d2248u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEA0u));
    // 0x1d224c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d224cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2250: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2254: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1D2254u;
    {
        const bool branch_taken_0x1d2254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2254u;
        // 0x1d2258: 0xac23fea0  sw          $v1, -0x160($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2254) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D225Cu;
label_1d225c:
    // 0x1d225c: 0x8e300044  lw          $s0, 0x44($s1)
    ctx->pc = 0x1d225cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1d2260: 0xc0749e8  jal         func_1D27A0
    ctx->pc = 0x1D2260u;
    SET_GPR_U32(ctx, 31, 0x1D2268u);
    ctx->pc = 0x1D2264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2260u;
    // 0x1d2264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27A0u, 0x1D2260u, 0x1D2268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2268u;
label_1d2268:
    // 0x1d2268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d226c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d226cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2270: 0xc07e258  jal         func_1F8960
    ctx->pc = 0x1D2270u;
    SET_GPR_U32(ctx, 31, 0x1D2278u);
    ctx->pc = 0x1D2274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2270u;
    // 0x1d2274: 0x240603c4  addiu       $a2, $zero, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8960u, 0x1D2270u, 0x1D2278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2278u;
label_1d2278:
    // 0x1d2278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d227c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d227cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2280: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2280u;
    SET_GPR_U32(ctx, 31, 0x1D2288u);
    ctx->pc = 0x1D2284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2280u;
    // 0x1d2284: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2280u, 0x1D2288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2288u;
label_1d2288:
    // 0x1d2288: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d228c: 0x8c23fea0  lw          $v1, -0x160($at)
    ctx->pc = 0x1d228cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEA0u));
    // 0x1d2290: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2294: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2298: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D2298u;
    {
        const bool branch_taken_0x1d2298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2298u;
        // 0x1d229c: 0xac23fea0  sw          $v1, -0x160($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2298) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D22A0u;
label_1d22a0:
    // 0x1d22a0: 0xc07e18a  jal         func_1F8628
    ctx->pc = 0x1D22A0u;
    SET_GPR_U32(ctx, 31, 0x1D22A8u);
    ctx->pc = 0x1D22A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D22A0u;
    // 0x1d22a4: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8628u, 0x1D22A0u, 0x1D22A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D22A8u;
label_1d22a8:
    // 0x1d22a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d22a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d22ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d22acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d22b0: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D22B0u;
    SET_GPR_U32(ctx, 31, 0x1D22B8u);
    ctx->pc = 0x1D22B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D22B0u;
    // 0x1d22b4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D22B0u, 0x1D22B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D22B8u;
label_1d22b8:
    // 0x1d22b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d22b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d22bc: 0x8c23fea0  lw          $v1, -0x160($at)
    ctx->pc = 0x1d22bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEA0u));
    // 0x1d22c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d22c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d22c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d22c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d22c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D22C8u;
    {
        const bool branch_taken_0x1d22c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22C8u;
        // 0x1d22cc: 0xac23fea0  sw          $v1, -0x160($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22c8) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D22D0u;
label_1d22d0:
    // 0x1d22d0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d22d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d22d4: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d22d4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d22d8: 0xc046c14  jal         func_11B050
    ctx->pc = 0x1D22D8u;
    SET_GPR_U32(ctx, 31, 0x1D22E0u);
    ctx->pc = 0x1D22DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D22D8u;
    // 0x1d22dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x1D22D8u, 0x1D22E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D22E0u;
label_1d22e0:
    // 0x1d22e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1d22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d22e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d22e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d22e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d22e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d22ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d22ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d22f0: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x1d22f4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1d22f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d22f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d22f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d22fc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d22fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d2300: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d2300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_1d2304:
    // 0x1d2304: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d2304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d230c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d230cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2310: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2310u;
        // 0x1d2314: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2318u;
}
