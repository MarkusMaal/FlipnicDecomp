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

// Function: entry_0011cc28
// Address: 0x11cc28 - 0x11cc9c
void entry_0011cc28_0x11cc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cc28_0x11cc28");
#endif

    switch (ctx->pc) {
        case 0x11cc8cu: goto label_11cc8c;
        default: break;
    }

    ctx->pc = 0x11cc28u;

    // 0x11cc28: 0x32cc0  sll         $a1, $v1, 19
    ctx->pc = 0x11cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x11cc2c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x11cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11cc30: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x11cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x11cc34: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x11cc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x11cc38: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x11cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x11cc3c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11cc40: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x11cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x11cc44: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x11cc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x11cc48: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x11cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x11cc4c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11cc50: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x11cc50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11cc54: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x11CC54u;
    {
        const bool branch_taken_0x11cc54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cc54) {
            ctx->pc = 0x11CD40u;
            return;
        }
    }
    ctx->pc = 0x11CC5Cu;
    // 0x11cc5c: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x11cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11cc60: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x11cc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x11cc64: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x11CC64u;
    {
        const bool branch_taken_0x11cc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cc64) {
            ctx->pc = 0x11CC9Cu;
            return;
        }
    }
    ctx->pc = 0x11CC6Cu;
    // 0x11cc6c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x11cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x11cc70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11cc70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc74: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x11cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11cc78: 0x26240424  addiu       $a0, $s1, 0x424
    ctx->pc = 0x11cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1060));
    // 0x11cc7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11cc7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11cc80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc84: 0xc047bec  jal         func_11EFB0
    ctx->pc = 0x11CC84u;
    SET_GPR_U32(ctx, 31, 0x11CC8Cu);
    ctx->pc = 0x11CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC84u;
    // 0x11cc88: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EFB0u, 0x11CC84u, 0x11CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC8Cu;
label_11cc8c:
    // 0x11cc8c: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x11cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11cc90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11cc94: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x11CC94u;
    {
        const bool branch_taken_0x11cc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC94u;
        // 0x11cc98: 0xae2300ac  sw          $v1, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc94) {
            ctx->pc = 0x11CD40u;
            return;
        }
    }
    ctx->pc = 0x11CC9Cu;
}
