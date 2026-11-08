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

// Function: caseD_4
// Address: 0x1a9d44 - 0x1a9e34
void caseD_4_0x1a9d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1a9d44");
#endif

    switch (ctx->pc) {
        case 0x1a9d94u: goto label_1a9d94;
        case 0x1a9dd8u: goto label_1a9dd8;
        case 0x1a9e00u: goto label_1a9e00;
        case 0x1a9e30u: goto label_1a9e30;
        default: break;
    }

    ctx->pc = 0x1a9d44u;

    // 0x1a9d44: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a9d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a9d48: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x1a9d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1a9d4c: 0x146000e7  bnez        $v1, . + 4 + (0xE7 << 2)
    ctx->pc = 0x1A9D4Cu;
    {
        const bool branch_taken_0x1a9d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9d4c) {
            ctx->pc = 0x1AA0ECu;
            return;
        }
    }
    ctx->pc = 0x1A9D54u;
    // 0x1a9d54: 0x8ea506c4  lw          $a1, 0x6C4($s5)
    ctx->pc = 0x1a9d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1732)));
    // 0x1a9d58: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1a9d5c: 0x24422c90  addiu       $v0, $v0, 0x2C90
    ctx->pc = 0x1a9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11408));
    // 0x1a9d60: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a9d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a9d64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a9d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a9d68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9d6c: 0x752821  addu        $a1, $v1, $s5
    ctx->pc = 0x1a9d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1a9d70: 0x8ca30690  lw          $v1, 0x690($a1)
    ctx->pc = 0x1a9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1680)));
    // 0x1a9d74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a9d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a9d78: 0xaca30690  sw          $v1, 0x690($a1)
    ctx->pc = 0x1a9d78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1680), GPR_U32(ctx, 3));
    // 0x1a9d7c: 0x8ea306b4  lw          $v1, 0x6B4($s5)
    ctx->pc = 0x1a9d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1716)));
    // 0x1a9d80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9d84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9d88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a9d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9d8c: 0xc06a894  jal         func_1AA250
    ctx->pc = 0x1A9D8Cu;
    SET_GPR_U32(ctx, 31, 0x1A9D94u);
    ctx->pc = 0x1A9D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9D8Cu;
    // 0x1a9d90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA250u, 0x1A9D8Cu, 0x1A9D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D94u;
label_1a9d94:
    // 0x1a9d94: 0x8ea306c4  lw          $v1, 0x6C4($s5)
    ctx->pc = 0x1a9d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1732)));
    // 0x1a9d98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9d9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a9d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9da0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a9da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9da4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a9da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9da8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a9dac: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1a9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9db0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9db4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9db8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a9db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a9dbc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1a9dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a9dc0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a9dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a9dc4: 0x8c450690  lw          $a1, 0x690($v0)
    ctx->pc = 0x1a9dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1680)));
    // 0x1a9dc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9dcc: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x1a9dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1a9dd0: 0xc069bec  jal         func_1A6FB0
    ctx->pc = 0x1A9DD0u;
    SET_GPR_U32(ctx, 31, 0x1A9DD8u);
    ctx->pc = 0x1A9DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9DD0u;
    // 0x1a9dd4: 0x24440770  addiu       $a0, $v0, 0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB0u, 0x1A9DD0u, 0x1A9DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9DD8u;
label_1a9dd8:
    // 0x1a9dd8: 0x8ea306c4  lw          $v1, 0x6C4($s5)
    ctx->pc = 0x1a9dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1732)));
    // 0x1a9ddc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a9ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a9de0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9de4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9de8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1a9de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a9dec: 0x8c420690  lw          $v0, 0x690($v0)
    ctx->pc = 0x1a9decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1680)));
    // 0x1a9df0: 0x18400041  blez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1A9DF0u;
    {
        const bool branch_taken_0x1a9df0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a9df0) {
            ctx->pc = 0x1A9EF8u;
            return;
        }
    }
    ctx->pc = 0x1A9DF8u;
    // 0x1a9df8: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x1A9DF8u;
    SET_GPR_U32(ctx, 31, 0x1A9E00u);
    ctx->pc = 0x1A9DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9DF8u;
    // 0x1a9dfc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x1A9DF8u, 0x1A9E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E00u;
label_1a9e00:
    // 0x1a9e00: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9E00u;
    {
        const bool branch_taken_0x1a9e00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E00u;
        // 0x1a9e04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e00) {
            ctx->pc = 0x1A9E34u;
            return;
        }
    }
    ctx->pc = 0x1A9E08u;
    // 0x1a9e08: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1a9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x1a9e0c: 0x8ea506c4  lw          $a1, 0x6C4($s5)
    ctx->pc = 0x1a9e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1732)));
    // 0x1a9e10: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x1a9e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a9e14: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a9e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a9e18: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a9e1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9e20: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1a9e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a9e24: 0x8c450670  lw          $a1, 0x670($v0)
    ctx->pc = 0x1a9e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
    // 0x1a9e28: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x1A9E28u;
    SET_GPR_U32(ctx, 31, 0x1A9E30u);
    ctx->pc = 0x1A9E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E28u;
    // 0x1a9e2c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x1A9E28u, 0x1A9E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E30u;
label_1a9e30:
    // 0x1a9e30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a9e34u;
}
