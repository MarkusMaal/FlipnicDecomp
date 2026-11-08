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

// Function: entry_00122038
// Address: 0x122038 - 0x122064
void entry_00122038_0x122038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122038_0x122038");
#endif

    switch (ctx->pc) {
        case 0x122050u: goto label_122050;
        case 0x122058u: goto label_122058;
        default: break;
    }

    ctx->pc = 0x122038u;

    // 0x122038: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x122038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12203c: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12203Cu;
    {
        const bool branch_taken_0x12203c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x12203c) {
            ctx->pc = 0x122064u;
            return;
        }
    }
    ctx->pc = 0x122044u;
    // 0x122044: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x122044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x122048: 0xc048a20  jal         func_122880
    ctx->pc = 0x122048u;
    SET_GPR_U32(ctx, 31, 0x122050u);
    ctx->pc = 0x12204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122048u;
    // 0x12204c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122880u, 0x122048u, 0x122050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122050u;
label_122050:
    // 0x122050: 0xc048608  jal         func_121820
    ctx->pc = 0x122050u;
    SET_GPR_U32(ctx, 31, 0x122058u);
    ctx->pc = 0x122054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122050u;
    // 0x122054: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121820u, 0x122050u, 0x122058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122058u;
label_122058:
    // 0x122058: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x122058u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12205c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12205Cu;
    {
        const bool branch_taken_0x12205c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12205Cu;
        // 0x122060: 0xafb10058  sw          $s1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12205c) {
            ctx->pc = 0x1220A0u;
            return;
        }
    }
    ctx->pc = 0x122064u;
}
