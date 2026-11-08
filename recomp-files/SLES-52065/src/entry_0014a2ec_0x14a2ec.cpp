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

// Function: entry_0014a2ec
// Address: 0x14a2ec - 0x14a31c
void entry_0014a2ec_0x14a2ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a2ec_0x14a2ec");
#endif

    switch (ctx->pc) {
        case 0x14a314u: goto label_14a314;
        default: break;
    }

    ctx->pc = 0x14a2ecu;

    // 0x14a2ec: 0x0  nop
    ctx->pc = 0x14a2ecu;
    // NOP
    // 0x14a2f0: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x14a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x14a2f4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x14a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x14a2f8: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x14a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
    // 0x14a2fc: 0x27a300cc  addiu       $v1, $sp, 0xCC
    ctx->pc = 0x14a2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x14a300: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a304: 0x1080021d  beqz        $a0, . + 4 + (0x21D << 2)
    ctx->pc = 0x14A304u;
    {
        const bool branch_taken_0x14a304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a304) {
            ctx->pc = 0x14AB7Cu;
            return;
        }
    }
    ctx->pc = 0x14A30Cu;
    // 0x14a30c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14A30Cu;
    SET_GPR_U32(ctx, 31, 0x14A314u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14A30Cu, 0x14A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A314u;
label_14a314:
    // 0x14a314: 0x10000219  b           . + 4 + (0x219 << 2)
    ctx->pc = 0x14A314u;
    {
        const bool branch_taken_0x14a314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a314) {
            ctx->pc = 0x14AB7Cu;
            return;
        }
    }
    ctx->pc = 0x14A31Cu;
}
