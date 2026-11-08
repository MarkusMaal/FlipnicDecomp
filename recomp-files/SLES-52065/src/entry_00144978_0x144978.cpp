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

// Function: entry_00144978
// Address: 0x144978 - 0x1449b0
void entry_00144978_0x144978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144978_0x144978");
#endif

    switch (ctx->pc) {
        case 0x144988u: goto label_144988;
        case 0x1449acu: goto label_1449ac;
        default: break;
    }

    ctx->pc = 0x144978u;

label_144978:
    // 0x144978: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x144978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_14497c:
    // 0x14497c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x14497cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_144980:
    // 0x144980: 0xc04d074  jal         func_1341D0
label_144984:
    if (ctx->pc == 0x144984u) {
        ctx->pc = 0x144984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144980u;
        // 0x144984: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144988u;
        goto label_144988;
    }
    ctx->pc = 0x144980u;
    SET_GPR_U32(ctx, 31, 0x144988u);
    ctx->pc = 0x144984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144980u;
    // 0x144984: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1341D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341D0u, 0x144980u, 0x144988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144988u;
label_144988:
    // 0x144988: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_14498c:
    if (ctx->pc == 0x14498Cu) {
        ctx->pc = 0x144990u;
        goto label_144990;
    }
    ctx->pc = 0x144988u;
    {
        const bool branch_taken_0x144988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144988) {
            ctx->pc = 0x1449B8u;
            return;
        }
    }
    ctx->pc = 0x144990u;
label_144990:
    // 0x144990: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x144990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_144994:
    // 0x144994: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_144998:
    if (ctx->pc == 0x144998u) {
        ctx->pc = 0x144998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144994u;
        // 0x144998: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14499Cu;
        goto label_14499c;
    }
    ctx->pc = 0x144994u;
    {
        const bool branch_taken_0x144994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x144998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144994u;
        // 0x144998: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144994) {
            ctx->pc = 0x1449B0u;
            return;
        }
    }
    ctx->pc = 0x14499Cu;
label_14499c:
    // 0x14499c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14499cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1449a0:
    // 0x1449a0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1449a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1449a4:
    // 0x1449a4: 0x320f809  jalr        $t9
label_1449a8:
    if (ctx->pc == 0x1449A8u) {
        ctx->pc = 0x1449A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449A4u;
        // 0x1449a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1449ACu;
        goto label_1449ac;
    }
    ctx->pc = 0x1449A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1449ACu);
        ctx->pc = 0x1449A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449A4u;
        // 0x1449a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1449A4u, 0x1449ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1449ACu;
label_1449ac:
    // 0x1449ac: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x1449acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->pc = 0x1449b0u;
}
