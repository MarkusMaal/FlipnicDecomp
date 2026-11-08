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

// Function: entry_00149bf8
// Address: 0x149bf8 - 0x149c18
void entry_00149bf8_0x149bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149bf8_0x149bf8");
#endif

    switch (ctx->pc) {
        case 0x149c00u: goto label_149c00;
        default: break;
    }

    ctx->pc = 0x149bf8u;

    // 0x149bf8: 0xc050224  jal         func_140890
    ctx->pc = 0x149BF8u;
    SET_GPR_U32(ctx, 31, 0x149C00u);
    ctx->pc = 0x149BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149BF8u;
    // 0x149bfc: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x149BF8u, 0x149C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C00u;
label_149c00:
    // 0x149c00: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x149c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x149c04: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x149c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x149c08: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x149c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149c0c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x149c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x149c10: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x149c10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x149c14: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x149c14u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x149c18u;
}
