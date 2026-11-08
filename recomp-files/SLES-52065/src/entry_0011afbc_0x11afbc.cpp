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

// Function: entry_0011afbc
// Address: 0x11afbc - 0x11afe8
void entry_0011afbc_0x11afbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011afbc_0x11afbc");
#endif

    switch (ctx->pc) {
        case 0x11afd4u: goto label_11afd4;
        default: break;
    }

    ctx->pc = 0x11afbcu;

    // 0x11afbc: 0x8e62052c  lw          $v0, 0x52C($s3)
    ctx->pc = 0x11afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1324)));
    // 0x11afc0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11afc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11afc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11afc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11afc8: 0x24c6e730  addiu       $a2, $a2, -0x18D0
    ctx->pc = 0x11afc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960944));
    // 0x11afcc: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11AFCCu;
    SET_GPR_U32(ctx, 31, 0x11AFD4u);
    ctx->pc = 0x11AFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFCCu;
    // 0x11afd0: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11AFCCu, 0x11AFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFD4u;
label_11afd4:
    // 0x11afd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11afd8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AFD8u;
    {
        const bool branch_taken_0x11afd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11afd8) {
            ctx->pc = 0x11AFE8u;
            return;
        }
    }
    ctx->pc = 0x11AFE0u;
    // 0x11afe0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11AFE0u;
    {
        const bool branch_taken_0x11afe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFE0u;
        // 0x11afe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afe0) {
            ctx->pc = 0x11B02Cu;
            return;
        }
    }
    ctx->pc = 0x11AFE8u;
}
