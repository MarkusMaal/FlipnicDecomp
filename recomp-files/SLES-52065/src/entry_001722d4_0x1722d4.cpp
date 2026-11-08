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

// Function: entry_001722d4
// Address: 0x1722d4 - 0x172304
void entry_001722d4_0x1722d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001722d4_0x1722d4");
#endif

    switch (ctx->pc) {
        case 0x1722fcu: goto label_1722fc;
        default: break;
    }

    ctx->pc = 0x1722d4u;

    // 0x1722d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1722D4u;
    {
        const bool branch_taken_0x1722d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1722D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722D4u;
        // 0x1722d8: 0x262200a8  addiu       $v0, $s1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722d4) {
            ctx->pc = 0x172308u;
            return;
        }
    }
    ctx->pc = 0x1722DCu;
    // 0x1722dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1722dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1722e0: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x1722e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x1722e4: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x1722e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    // 0x1722e8: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x1722e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1722ec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1722ECu;
    {
        const bool branch_taken_0x1722ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1722ec) {
            ctx->pc = 0x172304u;
            return;
        }
    }
    ctx->pc = 0x1722F4u;
    // 0x1722f4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1722F4u;
    SET_GPR_U32(ctx, 31, 0x1722FCu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1722F4u, 0x1722FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1722FCu;
label_1722fc:
    // 0x1722fc: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x1722fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    // 0x172300: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x172300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
    ctx->pc = 0x172304u;
}
