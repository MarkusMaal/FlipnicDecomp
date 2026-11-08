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

// Function: entry_0021b068
// Address: 0x21b068 - 0x21b0b8
void entry_0021b068_0x21b068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b068_0x21b068");
#endif

    switch (ctx->pc) {
        case 0x21b084u: goto label_21b084;
        case 0x21b094u: goto label_21b094;
        case 0x21b0a4u: goto label_21b0a4;
        default: break;
    }

    ctx->pc = 0x21b068u;

label_21b068:
    // 0x21b068: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x21b068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_21b06c:
    // 0x21b06c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_21b070:
    if (ctx->pc == 0x21B070u) {
        ctx->pc = 0x21B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B06Cu;
        // 0x21b070: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B074u;
        goto label_21b074;
    }
    ctx->pc = 0x21B06Cu;
    {
        const bool branch_taken_0x21b06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B06Cu;
        // 0x21b070: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b06c) {
            ctx->pc = 0x21B018u;
            return;
        }
    }
    ctx->pc = 0x21B074u;
label_21b074:
    // 0x21b074: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x21b074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_21b078:
    // 0x21b078: 0x8c62473c  lw          $v0, 0x473C($v1)
    ctx->pc = 0x21b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18236)));
label_21b07c:
    // 0x21b07c: 0x40f809  jalr        $v0
label_21b080:
    if (ctx->pc == 0x21B080u) {
        ctx->pc = 0x21B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B07Cu;
        // 0x21b080: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B084u;
        goto label_21b084;
    }
    ctx->pc = 0x21B07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B084u);
        ctx->pc = 0x21B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B07Cu;
        // 0x21b080: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B07Cu, 0x21B084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B084u;
label_21b084:
    // 0x21b084: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x21b084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_21b088:
    // 0x21b088: 0x8c624738  lw          $v0, 0x4738($v1)
    ctx->pc = 0x21b088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18232)));
label_21b08c:
    // 0x21b08c: 0x40f809  jalr        $v0
label_21b090:
    if (ctx->pc == 0x21B090u) {
        ctx->pc = 0x21B094u;
        goto label_21b094;
    }
    ctx->pc = 0x21B08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B094u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B08Cu, 0x21B094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B094u;
label_21b094:
    // 0x21b094: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x21b094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_21b098:
    // 0x21b098: 0x8c62472c  lw          $v0, 0x472C($v1)
    ctx->pc = 0x21b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18220)));
label_21b09c:
    // 0x21b09c: 0xc01d0f2  jal         func_0743C8
label_21b0a0:
    if (ctx->pc == 0x21B0A0u) {
        ctx->pc = 0x21B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B09Cu;
        // 0x21b0a0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B0A4u;
        goto label_21b0a4;
    }
    ctx->pc = 0x21B09Cu;
    SET_GPR_U32(ctx, 31, 0x21B0A4u);
    ctx->pc = 0x21B0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B09Cu;
    // 0x21b0a0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x743C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x743C8u, 0x21B09Cu, 0x21B0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B0A4u;
label_21b0a4:
    // 0x21b0a4: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x21b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_21b0a8:
    // 0x21b0a8: 0x1a80000d  blez        $s4, . + 4 + (0xD << 2)
label_21b0ac:
    if (ctx->pc == 0x21B0ACu) {
        ctx->pc = 0x21B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0A8u;
        // 0x21b0ac: 0x8c444778  lw          $a0, 0x4778($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B0B0u;
        goto label_21b0b0;
    }
    ctx->pc = 0x21B0A8u;
    {
        const bool branch_taken_0x21b0a8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x21B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0A8u;
        // 0x21b0ac: 0x8c444778  lw          $a0, 0x4778($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b0a8) {
            ctx->pc = 0x21B0E0u;
            return;
        }
    }
    ctx->pc = 0x21B0B0u;
label_21b0b0:
    // 0x21b0b0: 0x3c118007  lui         $s1, 0x8007
    ctx->pc = 0x21b0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32775 << 16));
label_21b0b4:
    // 0x21b0b4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x21b0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x21b0b8u;
}
