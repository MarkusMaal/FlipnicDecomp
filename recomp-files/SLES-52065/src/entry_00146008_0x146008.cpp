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

// Function: entry_00146008
// Address: 0x146008 - 0x1460a8
void entry_00146008_0x146008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146008_0x146008");
#endif

    switch (ctx->pc) {
        case 0x146024u: goto label_146024;
        case 0x146038u: goto label_146038;
        case 0x146044u: goto label_146044;
        case 0x146068u: goto label_146068;
        case 0x146078u: goto label_146078;
        default: break;
    }

    ctx->pc = 0x146008u;

    // 0x146008: 0x14200027  bnez        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x146008u;
    {
        const bool branch_taken_0x146008 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x146008) {
            ctx->pc = 0x1460A8u;
            return;
        }
    }
    ctx->pc = 0x146010u;
    // 0x146010: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x146010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x146014: 0x24650014  addiu       $a1, $v1, 0x14
    ctx->pc = 0x146014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x146018: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x146018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14601c: 0xc052340  jal         func_148D00
    ctx->pc = 0x14601Cu;
    SET_GPR_U32(ctx, 31, 0x146024u);
    ctx->pc = 0x146020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14601Cu;
    // 0x146020: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x14601Cu, 0x146024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146024u;
label_146024:
    // 0x146024: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x146024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146028: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x146028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14602c: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x14602cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x146030: 0xc052340  jal         func_148D00
    ctx->pc = 0x146030u;
    SET_GPR_U32(ctx, 31, 0x146038u);
    ctx->pc = 0x146034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146030u;
    // 0x146034: 0x24450014  addiu       $a1, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x146030u, 0x146038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146038u;
label_146038:
    // 0x146038: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x146038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14603c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14603Cu;
    SET_GPR_U32(ctx, 31, 0x146044u);
    ctx->pc = 0x146040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14603Cu;
    // 0x146040: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14603Cu, 0x146044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146044u;
label_146044:
    // 0x146044: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x146044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x146048: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x146048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14604c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x14604cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x146050: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x146050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x146054: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x146054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x146058: 0xafa6010c  sw          $a2, 0x10C($sp)
    ctx->pc = 0x146058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 6));
    // 0x14605c: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x14605cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x146060: 0xc051898  jal         func_146260
    ctx->pc = 0x146060u;
    SET_GPR_U32(ctx, 31, 0x146068u);
    ctx->pc = 0x146064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146060u;
    // 0x146064: 0xafa20114  sw          $v0, 0x114($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x146060u, 0x146068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146068u;
label_146068:
    // 0x146068: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x146068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14606c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x146070: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x146070u;
    SET_GPR_U32(ctx, 31, 0x146078u);
    ctx->pc = 0x146074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146070u;
    // 0x146074: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x146070u, 0x146078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146078u;
label_146078:
    // 0x146078: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x146078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14607c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14607cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x146080: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x146080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146084: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x146084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x146088: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x146088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14608c: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x14608cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x146090: 0x24450014  addiu       $a1, $v0, 0x14
    ctx->pc = 0x146090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x146094: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x146094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x146098: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x146098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x14609c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x14609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1460a0: 0xc0523f0  jal         func_148FC0
    ctx->pc = 0x1460A0u;
    SET_GPR_U32(ctx, 31, 0x1460A8u);
    ctx->pc = 0x1460A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1460A0u;
    // 0x1460a4: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148FC0u, 0x1460A0u, 0x1460A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460A8u;
}
