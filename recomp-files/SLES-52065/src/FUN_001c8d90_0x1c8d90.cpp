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

// Function: FUN_001c8d90
// Address: 0x1c8d90 - 0x1c8ff8
void FUN_001c8d90_0x1c8d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c8d90_0x1c8d90");
#endif

    switch (ctx->pc) {
        case 0x1c8df8u: goto label_1c8df8;
        case 0x1c8e04u: goto label_1c8e04;
        case 0x1c8e10u: goto label_1c8e10;
        case 0x1c8e90u: goto label_1c8e90;
        case 0x1c8ec4u: goto label_1c8ec4;
        case 0x1c8f10u: goto label_1c8f10;
        case 0x1c8f30u: goto label_1c8f30;
        case 0x1c8f74u: goto label_1c8f74;
        case 0x1c8f80u: goto label_1c8f80;
        case 0x1c8f8cu: goto label_1c8f8c;
        case 0x1c8f98u: goto label_1c8f98;
        case 0x1c8facu: goto label_1c8fac;
        case 0x1c8fc0u: goto label_1c8fc0;
        case 0x1c8fd4u: goto label_1c8fd4;
        default: break;
    }

    ctx->pc = 0x1c8d90u;

    // 0x1c8d90: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1c8d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1c8d94: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1c8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1c8d98: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c8d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c8d9c: 0x24426900  addiu       $v0, $v0, 0x6900
    ctx->pc = 0x1c8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26880));
    // 0x1c8da0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c8da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c8da4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c8da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c8da8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c8da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c8dac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8db0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c8db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c8db4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c8db4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8db8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c8db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c8dbc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c8dbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c8dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c8dc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c8dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c8dc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c8dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dcc: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x1c8dccu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x216900u));
    // 0x1c8dd0: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x1c8dd0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x216910u));
    // 0x1c8dd4: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1c8dd4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x216920u));
    // 0x1c8dd8: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1c8dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1c8ddc: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x1c8ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x1c8de0: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x1c8de0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x1c8de4: 0x8c25f8b0  lw          $a1, -0x750($at)
    ctx->pc = 0x1c8de4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36F8B0u));
    // 0x1c8de8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8dec: 0x8c26f8b8  lw          $a2, -0x748($at)
    ctx->pc = 0x1c8decu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c8df0: 0xc072400  jal         func_1C9000
    ctx->pc = 0x1C8DF0u;
    SET_GPR_U32(ctx, 31, 0x1C8DF8u);
    ctx->pc = 0x1C8DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DF0u;
    // 0x1c8df4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9000u, 0x1C8DF0u, 0x1C8DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DF8u;
label_1c8df8:
    // 0x1c8df8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c8df8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dfc: 0xc072e84  jal         func_1CBA10
    ctx->pc = 0x1C8DFCu;
    SET_GPR_U32(ctx, 31, 0x1C8E04u);
    ctx->pc = 0x1C8E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DFCu;
    // 0x1c8e00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBA10u, 0x1C8DFCu, 0x1C8E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E04u;
label_1c8e04:
    // 0x1c8e04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c8e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e08: 0xc073080  jal         func_1CC200
    ctx->pc = 0x1C8E08u;
    SET_GPR_U32(ctx, 31, 0x1C8E10u);
    ctx->pc = 0x1C8E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E08u;
    // 0x1c8e0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC200u, 0x1C8E08u, 0x1C8E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E10u;
label_1c8e10:
    // 0x1c8e10: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x1c8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1c8e14: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c8e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c8e18: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1c8e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c8e1c: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c8e20: 0x84630070  lh          $v1, 0x70($v1)
    ctx->pc = 0x1c8e20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1c8e24: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c8e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c8e28: 0xa4432828  sh          $v1, 0x2828($v0)
    ctx->pc = 0x1c8e28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10280), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c8e2c: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c8e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c8e30: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8E30u;
    {
        const bool branch_taken_0x1c8e30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E30u;
        // 0x1c8e34: 0xa040282c  sb          $zero, 0x282C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 10284), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e30) {
            ctx->pc = 0x1C8E40u;
            goto label_1c8e40;
        }
    }
    ctx->pc = 0x1C8E38u;
    // 0x1c8e38: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1C8E38u;
    {
        const bool branch_taken_0x1c8e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E38u;
        // 0x1c8e3c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e38) {
            ctx->pc = 0x1C8F1Cu;
            goto label_1c8f1c;
        }
    }
    ctx->pc = 0x1C8E40u;
label_1c8e40:
    // 0x1c8e40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8e44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8e48: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c8e48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c8e4c: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1C8E4Cu;
    {
        const bool branch_taken_0x1c8e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8e4c) {
            ctx->pc = 0x1C8F18u;
            goto label_1c8f18;
        }
    }
    ctx->pc = 0x1C8E54u;
    // 0x1c8e54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8e58: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C8E58u;
    {
        const bool branch_taken_0x1c8e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E58u;
        // 0x1c8e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e58) {
            ctx->pc = 0x1C8EACu;
            goto label_1c8eac;
        }
    }
    ctx->pc = 0x1C8E60u;
    // 0x1c8e60: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8E60u;
    {
        const bool branch_taken_0x1c8e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8e60) {
            ctx->pc = 0x1C8E78u;
            goto label_1c8e78;
        }
    }
    ctx->pc = 0x1C8E68u;
    // 0x1c8e68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8E68u;
    {
        const bool branch_taken_0x1c8e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8e68) {
            ctx->pc = 0x1C8E78u;
            goto label_1c8e78;
        }
    }
    ctx->pc = 0x1C8E70u;
    // 0x1c8e70: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1C8E70u;
    {
        const bool branch_taken_0x1c8e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E70u;
        // 0x1c8e74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e70) {
            ctx->pc = 0x1C8F20u;
            goto label_1c8f20;
        }
    }
    ctx->pc = 0x1C8E78u;
label_1c8e78:
    // 0x1c8e78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8e7c: 0x16430006  bne         $s2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8E7Cu;
    {
        const bool branch_taken_0x1c8e7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E7Cu;
        // 0x1c8e80: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e7c) {
            ctx->pc = 0x1C8E98u;
            goto label_1c8e98;
        }
    }
    ctx->pc = 0x1C8E84u;
    // 0x1c8e84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e88: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C8E88u;
    SET_GPR_U32(ctx, 31, 0x1C8E90u);
    ctx->pc = 0x1C8E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E88u;
    // 0x1c8e8c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C8E88u, 0x1C8E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E90u;
label_1c8e90:
    // 0x1c8e90: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1C8E90u;
    {
        const bool branch_taken_0x1c8e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E90u;
        // 0x1c8e94: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e90) {
            ctx->pc = 0x1C8FD8u;
            goto label_1c8fd8;
        }
    }
    ctx->pc = 0x1C8E98u;
label_1c8e98:
    // 0x1c8e98: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x1c8e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c8e9c: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1c8ea0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1c8ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8ea4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C8EA4u;
    {
        const bool branch_taken_0x1c8ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EA4u;
        // 0x1c8ea8: 0xa043282b  sb          $v1, 0x282B($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 10283), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ea4) {
            ctx->pc = 0x1C8F1Cu;
            goto label_1c8f1c;
        }
    }
    ctx->pc = 0x1C8EACu;
label_1c8eac:
    // 0x1c8eac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8eb0: 0x16430006  bne         $s2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8EB0u;
    {
        const bool branch_taken_0x1c8eb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EB0u;
        // 0x1c8eb4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8eb0) {
            ctx->pc = 0x1C8ECCu;
            goto label_1c8ecc;
        }
    }
    ctx->pc = 0x1C8EB8u;
    // 0x1c8eb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ebc: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C8EBCu;
    SET_GPR_U32(ctx, 31, 0x1C8EC4u);
    ctx->pc = 0x1C8EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EBCu;
    // 0x1c8ec0: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C8EBCu, 0x1C8EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EC4u;
label_1c8ec4:
    // 0x1c8ec4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1C8EC4u;
    {
        const bool branch_taken_0x1c8ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8ec4) {
            ctx->pc = 0x1C8FD4u;
            goto label_1c8fd4;
        }
    }
    ctx->pc = 0x1C8ECCu;
label_1c8ecc:
    // 0x1c8ecc: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8ECCu;
    {
        const bool branch_taken_0x1c8ecc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8ECCu;
        // 0x1c8ed0: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ecc) {
            ctx->pc = 0x1C8EE4u;
            goto label_1c8ee4;
        }
    }
    ctx->pc = 0x1C8ED4u;
    // 0x1c8ed4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c8ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c8ed8: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c8edc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8EDCu;
    {
        const bool branch_taken_0x1c8edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EDCu;
        // 0x1c8ee0: 0xa043282c  sb          $v1, 0x282C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 10284), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8edc) {
            ctx->pc = 0x1C8EECu;
            goto label_1c8eec;
        }
    }
    ctx->pc = 0x1C8EE4u;
label_1c8ee4:
    // 0x1c8ee4: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1c8ee8: 0xa040282c  sb          $zero, 0x282C($v0)
    ctx->pc = 0x1c8ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10284), (uint8_t)GPR_U32(ctx, 0));
label_1c8eec:
    // 0x1c8eec: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c8eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c8ef0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c8ef4: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c8ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c8ef8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8efc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c8efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f00: 0x24a56110  addiu       $a1, $a1, 0x6110
    ctx->pc = 0x1c8f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24848));
    // 0x1c8f04: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1c8f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c8f08: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1C8F08u;
    SET_GPR_U32(ctx, 31, 0x1C8F10u);
    ctx->pc = 0x1C8F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F08u;
    // 0x1c8f0c: 0xa043282b  sb          $v1, 0x282B($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 10283), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1C8F08u, 0x1C8F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F10u;
label_1c8f10:
    // 0x1c8f10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8F10u;
    {
        const bool branch_taken_0x1c8f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F10u;
        // 0x1c8f14: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f10) {
            ctx->pc = 0x1C8F1Cu;
            goto label_1c8f1c;
        }
    }
    ctx->pc = 0x1C8F18u;
label_1c8f18:
    // 0x1c8f18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c8f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c8f1c:
    // 0x1c8f1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8f20:
    // 0x1c8f20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c8f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f28: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1C8F28u;
    SET_GPR_U32(ctx, 31, 0x1C8F30u);
    ctx->pc = 0x1C8F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F28u;
    // 0x1c8f2c: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1C8F28u, 0x1C8F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F30u;
label_1c8f30:
    // 0x1c8f30: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x1c8f30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x1c8f34: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1c8f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c8f38: 0x25086930  addiu       $t0, $t0, 0x6930
    ctx->pc = 0x1c8f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26928));
    // 0x1c8f3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f40: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1c8f40u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x216930u));
    // 0x1c8f44: 0x79050010  lq          $a1, 0x10($t0)
    ctx->pc = 0x1c8f44u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x216940u));
    // 0x1c8f48: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x1c8f48u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x216950u));
    // 0x1c8f4c: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x1c8f4cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x216960u));
    // 0x1c8f50: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1c8f50u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1c8f54: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1c8f54u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x1c8f58: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1c8f58u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x1c8f5c: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1c8f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x1c8f60: 0x79030040  lq          $v1, 0x40($t0)
    ctx->pc = 0x1c8f60u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x216970u));
    // 0x1c8f64: 0x79020050  lq          $v0, 0x50($t0)
    ctx->pc = 0x1c8f64u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x216980u));
    // 0x1c8f68: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x1c8f68u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x1c8f6c: 0xc07240c  jal         func_1C9030
    ctx->pc = 0x1C8F6Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F74u);
    ctx->pc = 0x1C8F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F6Cu;
    // 0x1c8f70: 0x7ce20050  sq          $v0, 0x50($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9030u, 0x1C8F6Cu, 0x1C8F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F74u;
label_1c8f74:
    // 0x1c8f74: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1c8f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x1c8f78: 0xc072434  jal         func_1C90D0
    ctx->pc = 0x1C8F78u;
    SET_GPR_U32(ctx, 31, 0x1C8F80u);
    ctx->pc = 0x1C8F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F78u;
    // 0x1c8f7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C90D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C90D0u, 0x1C8F78u, 0x1C8F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F80u;
label_1c8f80:
    // 0x1c8f80: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1c8f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1c8f84: 0xc072448  jal         func_1C9120
    ctx->pc = 0x1C8F84u;
    SET_GPR_U32(ctx, 31, 0x1C8F8Cu);
    ctx->pc = 0x1C8F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F84u;
    // 0x1c8f88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9120u, 0x1C8F84u, 0x1C8F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F8Cu;
label_1c8f8c:
    // 0x1c8f8c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1c8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x1c8f90: 0xc072464  jal         func_1C9190
    ctx->pc = 0x1C8F90u;
    SET_GPR_U32(ctx, 31, 0x1C8F98u);
    ctx->pc = 0x1C8F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F90u;
    // 0x1c8f94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9190u, 0x1C8F90u, 0x1C8F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F98u;
label_1c8f98:
    // 0x1c8f98: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x1c8f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x1c8f9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fa0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1c8fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c8fa4: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C8FA4u;
    SET_GPR_U32(ctx, 31, 0x1C8FACu);
    ctx->pc = 0x1C8FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8FA4u;
    // 0x1c8fa8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C8FA4u, 0x1C8FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FACu;
label_1c8fac:
    // 0x1c8fac: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c8fb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fb4: 0x24a56650  addiu       $a1, $a1, 0x6650
    ctx->pc = 0x1c8fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26192));
    // 0x1c8fb8: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C8FB8u;
    SET_GPR_U32(ctx, 31, 0x1C8FC0u);
    ctx->pc = 0x1C8FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8FB8u;
    // 0x1c8fbc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C8FB8u, 0x1C8FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FC0u;
label_1c8fc0:
    // 0x1c8fc0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c8fc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fc8: 0x24a56820  addiu       $a1, $a1, 0x6820
    ctx->pc = 0x1c8fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26656));
    // 0x1c8fcc: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C8FCCu;
    SET_GPR_U32(ctx, 31, 0x1C8FD4u);
    ctx->pc = 0x1C8FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8FCCu;
    // 0x1c8fd0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C8FCCu, 0x1C8FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FD4u;
label_1c8fd4:
    // 0x1c8fd4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c8fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c8fd8:
    // 0x1c8fd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c8fd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8fdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c8fdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8fe0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c8fe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8fe4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c8fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8fe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8FF0u;
        // 0x1c8ff4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8FF8u;
}
