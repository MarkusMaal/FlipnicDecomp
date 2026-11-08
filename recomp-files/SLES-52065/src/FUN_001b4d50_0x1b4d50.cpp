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

// Function: FUN_001b4d50
// Address: 0x1b4d50 - 0x1b4f2c
void FUN_001b4d50_0x1b4d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4d50_0x1b4d50");
#endif

    switch (ctx->pc) {
        case 0x1b4e68u: goto label_1b4e68;
        case 0x1b4e74u: goto label_1b4e74;
        case 0x1b4e80u: goto label_1b4e80;
        case 0x1b4e98u: goto label_1b4e98;
        case 0x1b4ea4u: goto label_1b4ea4;
        case 0x1b4eb0u: goto label_1b4eb0;
        case 0x1b4eb8u: goto label_1b4eb8;
        case 0x1b4ec0u: goto label_1b4ec0;
        case 0x1b4ec8u: goto label_1b4ec8;
        case 0x1b4ee4u: goto label_1b4ee4;
        case 0x1b4f00u: goto label_1b4f00;
        case 0x1b4f1cu: goto label_1b4f1c;
        default: break;
    }

    ctx->pc = 0x1b4d50u;

    // 0x1b4d50: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1b4d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1b4d54: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1b4d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1b4d58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4d5c: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1b4d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1b4d60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4d64: 0x24422d50  addiu       $v0, $v0, 0x2D50
    ctx->pc = 0x1b4d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11600));
    // 0x1b4d68: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b4d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b4d6c: 0x78580000  lq          $t8, 0x0($v0)
    ctx->pc = 0x1b4d6cu;
    SET_GPR_VEC(ctx, 24, FAST_READ128(0x212D50u));
    // 0x1b4d70: 0x8c24ca84  lw          $a0, -0x357C($at)
    ctx->pc = 0x1b4d70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1b4d74: 0x3c0e0021  lui         $t6, 0x21
    ctx->pc = 0x1b4d74u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)33 << 16));
    // 0x1b4d78: 0x784c0010  lq          $t4, 0x10($v0)
    ctx->pc = 0x1b4d78u;
    SET_GPR_VEC(ctx, 12, FAST_READ128(0x212D60u));
    // 0x1b4d7c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1b4d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1b4d80: 0x784a0020  lq          $t2, 0x20($v0)
    ctx->pc = 0x1b4d80u;
    SET_GPR_VEC(ctx, 10, FAST_READ128(0x212D70u));
    // 0x1b4d84: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x1b4d84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x1b4d88: 0x27b90020  addiu       $t9, $sp, 0x20
    ctx->pc = 0x1b4d88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4d8c: 0x24c62d80  addiu       $a2, $a2, 0x2D80
    ctx->pc = 0x1b4d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11648));
    // 0x1b4d90: 0x27af0050  addiu       $t7, $sp, 0x50
    ctx->pc = 0x1b4d90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b4d94: 0x25ce2db0  addiu       $t6, $t6, 0x2DB0
    ctx->pc = 0x1b4d94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11696));
    // 0x1b4d98: 0x27ad0080  addiu       $t5, $sp, 0x80
    ctx->pc = 0x1b4d98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b4d9c: 0x24a52df0  addiu       $a1, $a1, 0x2DF0
    ctx->pc = 0x1b4d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11760));
    // 0x1b4da0: 0x84832828  lh          $v1, 0x2828($a0)
    ctx->pc = 0x1b4da0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10280)));
    // 0x1b4da4: 0x27ab00c0  addiu       $t3, $sp, 0xC0
    ctx->pc = 0x1b4da4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b4da8: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x1b4da8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b4dac: 0x25082e50  addiu       $t0, $t0, 0x2E50
    ctx->pc = 0x1b4dacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11856));
    // 0x1b4db0: 0x9082282b  lbu         $v0, 0x282B($a0)
    ctx->pc = 0x1b4db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10283)));
    // 0x1b4db4: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x1b4db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1b4db8: 0x7f380000  sq          $t8, 0x0($t9)
    ctx->pc = 0x1b4db8u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 24));
    // 0x1b4dbc: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x1b4dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x1b4dc0: 0x7f2c0010  sq          $t4, 0x10($t9)
    ctx->pc = 0x1b4dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 16), GPR_VEC(ctx, 12));
    // 0x1b4dc4: 0x24842e20  addiu       $a0, $a0, 0x2E20
    ctx->pc = 0x1b4dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11808));
    // 0x1b4dc8: 0x7f2a0020  sq          $t2, 0x20($t9)
    ctx->pc = 0x1b4dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32), GPR_VEC(ctx, 10));
    // 0x1b4dcc: 0x78cc0000  lq          $t4, 0x0($a2)
    ctx->pc = 0x1b4dccu;
    SET_GPR_VEC(ctx, 12, FAST_READ128(0x212D80u));
    // 0x1b4dd0: 0x78ca0010  lq          $t2, 0x10($a2)
    ctx->pc = 0x1b4dd0u;
    SET_GPR_VEC(ctx, 10, FAST_READ128(0x212D90u));
    // 0x1b4dd4: 0x78c60020  lq          $a2, 0x20($a2)
    ctx->pc = 0x1b4dd4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x212DA0u));
    // 0x1b4dd8: 0x7dec0000  sq          $t4, 0x0($t7)
    ctx->pc = 0x1b4dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 12));
    // 0x1b4ddc: 0x7dea0010  sq          $t2, 0x10($t7)
    ctx->pc = 0x1b4ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 16), GPR_VEC(ctx, 10));
    // 0x1b4de0: 0x7de60020  sq          $a2, 0x20($t7)
    ctx->pc = 0x1b4de0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 32), GPR_VEC(ctx, 6));
    // 0x1b4de4: 0x79cc0000  lq          $t4, 0x0($t6)
    ctx->pc = 0x1b4de4u;
    SET_GPR_VEC(ctx, 12, FAST_READ128(0x212DB0u));
    // 0x1b4de8: 0xc5c00030  lwc1        $f0, 0x30($t6)
    ctx->pc = 0x1b4de8u;
    { uint32_t bits = FAST_READ32(0x212DE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4dec: 0x79ca0010  lq          $t2, 0x10($t6)
    ctx->pc = 0x1b4decu;
    SET_GPR_VEC(ctx, 10, FAST_READ128(0x212DC0u));
    // 0x1b4df0: 0x79c60020  lq          $a2, 0x20($t6)
    ctx->pc = 0x1b4df0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x212DD0u));
    // 0x1b4df4: 0x7dac0000  sq          $t4, 0x0($t5)
    ctx->pc = 0x1b4df4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 12));
    // 0x1b4df8: 0x7daa0010  sq          $t2, 0x10($t5)
    ctx->pc = 0x1b4df8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 10));
    // 0x1b4dfc: 0x7da60020  sq          $a2, 0x20($t5)
    ctx->pc = 0x1b4dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 32), GPR_VEC(ctx, 6));
    // 0x1b4e00: 0xe5a00030  swc1        $f0, 0x30($t5)
    ctx->pc = 0x1b4e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 48), bits); }
    // 0x1b4e04: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1b4e04u;
    SET_GPR_VEC(ctx, 10, FAST_READ128(0x212DF0u));
    // 0x1b4e08: 0x78a60010  lq          $a2, 0x10($a1)
    ctx->pc = 0x1b4e08u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x212E00u));
    // 0x1b4e0c: 0x78a50020  lq          $a1, 0x20($a1)
    ctx->pc = 0x1b4e0cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x212E10u));
    // 0x1b4e10: 0x7d6a0000  sq          $t2, 0x0($t3)
    ctx->pc = 0x1b4e10u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 10));
    // 0x1b4e14: 0x7d660010  sq          $a2, 0x10($t3)
    ctx->pc = 0x1b4e14u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), GPR_VEC(ctx, 6));
    // 0x1b4e18: 0x7d650020  sq          $a1, 0x20($t3)
    ctx->pc = 0x1b4e18u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 32), GPR_VEC(ctx, 5));
    // 0x1b4e1c: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x1b4e1cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x212E20u));
    // 0x1b4e20: 0x78850010  lq          $a1, 0x10($a0)
    ctx->pc = 0x1b4e20u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x212E30u));
    // 0x1b4e24: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x1b4e24u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x212E40u));
    // 0x1b4e28: 0x7d260000  sq          $a2, 0x0($t1)
    ctx->pc = 0x1b4e28u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 6));
    // 0x1b4e2c: 0x7d250010  sq          $a1, 0x10($t1)
    ctx->pc = 0x1b4e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 5));
    // 0x1b4e30: 0x7d240020  sq          $a0, 0x20($t1)
    ctx->pc = 0x1b4e30u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), GPR_VEC(ctx, 4));
    // 0x1b4e34: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1b4e34u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x212E50u));
    // 0x1b4e38: 0xc5000030  lwc1        $f0, 0x30($t0)
    ctx->pc = 0x1b4e38u;
    { uint32_t bits = FAST_READ32(0x212E80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4e3c: 0x79050010  lq          $a1, 0x10($t0)
    ctx->pc = 0x1b4e3cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x212E60u));
    // 0x1b4e40: 0x79040020  lq          $a0, 0x20($t0)
    ctx->pc = 0x1b4e40u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x212E70u));
    // 0x1b4e44: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1b4e44u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1b4e48: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1b4e48u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x1b4e4c: 0x7ce40020  sq          $a0, 0x20($a3)
    ctx->pc = 0x1b4e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 4));
    // 0x1b4e50: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B4E50u;
    {
        const bool branch_taken_0x1b4e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E50u;
        // 0x1b4e54: 0xe4e00030  swc1        $f0, 0x30($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e50) {
            ctx->pc = 0x1B4E88u;
            goto label_1b4e88;
        }
    }
    ctx->pc = 0x1B4E58u;
    // 0x1b4e58: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x1b4e58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b4e5c: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x1b4e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x1b4e60: 0xc07307c  jal         func_1CC1F0
    ctx->pc = 0x1B4E60u;
    SET_GPR_U32(ctx, 31, 0x1B4E68u);
    ctx->pc = 0x1B4E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E60u;
    // 0x1b4e64: 0x8c4400c0  lw          $a0, 0xC0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1F0u, 0x1B4E60u, 0x1B4E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E68u;
label_1b4e68:
    // 0x1b4e68: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x1b4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x1b4e6c: 0xc073084  jal         func_1CC210
    ctx->pc = 0x1B4E6Cu;
    SET_GPR_U32(ctx, 31, 0x1B4E74u);
    ctx->pc = 0x1B4E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E6Cu;
    // 0x1b4e70: 0x8c4400f0  lw          $a0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC210u, 0x1B4E6Cu, 0x1B4E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E74u;
label_1b4e74:
    // 0x1b4e74: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x1b4e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x1b4e78: 0xc073080  jal         func_1CC200
    ctx->pc = 0x1B4E78u;
    SET_GPR_U32(ctx, 31, 0x1B4E80u);
    ctx->pc = 0x1B4E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E78u;
    // 0x1b4e7c: 0x8c440120  lw          $a0, 0x120($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC200u, 0x1B4E78u, 0x1B4E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E80u;
label_1b4e80:
    // 0x1b4e80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B4E80u;
    {
        const bool branch_taken_0x1b4e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e80) {
            ctx->pc = 0x1B4EB0u;
            goto label_1b4eb0;
        }
    }
    ctx->pc = 0x1B4E88u;
label_1b4e88:
    // 0x1b4e88: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x1b4e88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b4e8c: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x1b4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x1b4e90: 0xc07307c  jal         func_1CC1F0
    ctx->pc = 0x1B4E90u;
    SET_GPR_U32(ctx, 31, 0x1B4E98u);
    ctx->pc = 0x1B4E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E90u;
    // 0x1b4e94: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1F0u, 0x1B4E90u, 0x1B4E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E98u;
label_1b4e98:
    // 0x1b4e98: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x1b4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x1b4e9c: 0xc073084  jal         func_1CC210
    ctx->pc = 0x1B4E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B4EA4u);
    ctx->pc = 0x1B4EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E9Cu;
    // 0x1b4ea0: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC210u, 0x1B4E9Cu, 0x1B4EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EA4u;
label_1b4ea4:
    // 0x1b4ea4: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x1b4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x1b4ea8: 0xc073080  jal         func_1CC200
    ctx->pc = 0x1B4EA8u;
    SET_GPR_U32(ctx, 31, 0x1B4EB0u);
    ctx->pc = 0x1B4EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EA8u;
    // 0x1b4eac: 0x8c440080  lw          $a0, 0x80($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC200u, 0x1B4EA8u, 0x1B4EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EB0u;
label_1b4eb0:
    // 0x1b4eb0: 0xc06d3dc  jal         func_1B4F70
    ctx->pc = 0x1B4EB0u;
    SET_GPR_U32(ctx, 31, 0x1B4EB8u);
    ctx->pc = 0x1B4F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4F70u, 0x1B4EB0u, 0x1B4EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EB8u;
label_1b4eb8:
    // 0x1b4eb8: 0xc06d49c  jal         func_1B5270
    ctx->pc = 0x1B4EB8u;
    SET_GPR_U32(ctx, 31, 0x1B4EC0u);
    ctx->pc = 0x1B5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5270u, 0x1B4EB8u, 0x1B4EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EC0u;
label_1b4ec0:
    // 0x1b4ec0: 0xc046b74  jal         func_11ADD0
    ctx->pc = 0x1B4EC0u;
    SET_GPR_U32(ctx, 31, 0x1B4EC8u);
    ctx->pc = 0x1B4EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EC0u;
    // 0x1b4ec4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ADD0u, 0x1B4EC0u, 0x1B4EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EC8u;
label_1b4ec8:
    // 0x1b4ec8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b4ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4ecc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b4ed0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b4ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1b4ed4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1b4ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b4ed8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b4ed8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b4edc: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1B4EDCu;
    SET_GPR_U32(ctx, 31, 0x1B4EE4u);
    ctx->pc = 0x1B4EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EDCu;
    // 0x1b4ee0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1B4EDCu, 0x1B4EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EE4u;
label_1b4ee4:
    // 0x1b4ee4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b4ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4ee8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4eec: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b4eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1b4ef0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ef4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b4ef4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b4ef8: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1B4EF8u;
    SET_GPR_U32(ctx, 31, 0x1B4F00u);
    ctx->pc = 0x1B4EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EF8u;
    // 0x1b4efc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1B4EF8u, 0x1B4F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F00u;
label_1b4f00:
    // 0x1b4f00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b4f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4f04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f08: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b4f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b4f0c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b4f0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b4f10: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1b4f10u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1b4f14: 0xc053c00  jal         func_14F000
    ctx->pc = 0x1B4F14u;
    SET_GPR_U32(ctx, 31, 0x1B4F1Cu);
    ctx->pc = 0x1B4F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F14u;
    // 0x1b4f18: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x1B4F14u, 0x1B4F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F1Cu;
label_1b4f1c:
    // 0x1b4f1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4f24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F24u;
        // 0x1b4f28: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4F2Cu;
}
