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

// Function: entry_00149dc0
// Address: 0x149dc0 - 0x149e8c
void entry_00149dc0_0x149dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149dc0_0x149dc0");
#endif

    switch (ctx->pc) {
        case 0x149e18u: goto label_149e18;
        case 0x149e24u: goto label_149e24;
        case 0x149e34u: goto label_149e34;
        default: break;
    }

    ctx->pc = 0x149dc0u;

    // 0x149dc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x149dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149dc4: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x149dc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x149dc8: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x149dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x149dcc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x149dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x149dd0: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x149dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x149dd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149dd8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x149dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x149ddc: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x149ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x149de0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149de4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x149de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x149de8: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x149de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x149dec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149df0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x149df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x149df4: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x149df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x149df8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149dfc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x149dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x149e00: 0x27a20144  addiu       $v0, $sp, 0x144
    ctx->pc = 0x149e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x149e04: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x149E04u;
    {
        const bool branch_taken_0x149e04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x149E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E04u;
        // 0x149e08: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e04) {
            ctx->pc = 0x149E8Cu;
            return;
        }
    }
    ctx->pc = 0x149E0Cu;
    // 0x149e0c: 0x27a407e0  addiu       $a0, $sp, 0x7E0
    ctx->pc = 0x149e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2016));
    // 0x149e10: 0xc052bf8  jal         func_14AFE0
    ctx->pc = 0x149E10u;
    SET_GPR_U32(ctx, 31, 0x149E18u);
    ctx->pc = 0x149E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E10u;
    // 0x149e14: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFE0u, 0x149E10u, 0x149E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E18u;
label_149e18:
    // 0x149e18: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x149e18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x149e1c: 0xc051898  jal         func_146260
    ctx->pc = 0x149E1Cu;
    SET_GPR_U32(ctx, 31, 0x149E24u);
    ctx->pc = 0x149E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E1Cu;
    // 0x149e20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x149E1Cu, 0x149E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E24u;
label_149e24:
    // 0x149e24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x149e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e28: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x149e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x149e2c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149E2Cu;
    SET_GPR_U32(ctx, 31, 0x149E34u);
    ctx->pc = 0x149E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E2Cu;
    // 0x149e30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149E2Cu, 0x149E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E34u;
label_149e34:
    // 0x149e34: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x149e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x149e38: 0x27a502ac  addiu       $a1, $sp, 0x2AC
    ctx->pc = 0x149e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
    // 0x149e3c: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x149e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x149e40: 0x27a702b4  addiu       $a3, $sp, 0x2B4
    ctx->pc = 0x149e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
    // 0x149e44: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x149e44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x149e48: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x149e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x149e4c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x149e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x149e50: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x149e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x149e54: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x149e54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x149e58: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x149e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x149e5c: 0x8fa302a4  lw          $v1, 0x2A4($sp)
    ctx->pc = 0x149e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x149e60: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x149e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x149e64: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x149e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
    // 0x149e68: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x149e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
    // 0x149e6c: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x149e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x149e70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x149e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149e74: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x149e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x149e78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x149e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149e7c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x149e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x149e80: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x149e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x149e84: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x149E84u;
    {
        const bool branch_taken_0x149e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E84u;
        // 0x149e88: 0xafa20164  sw          $v0, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e84) {
            ctx->pc = 0x149EC4u;
            return;
        }
    }
    ctx->pc = 0x149E8Cu;
}
