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

// Function: entry_00172308
// Address: 0x172308 - 0x172338
void entry_00172308_0x172308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172308_0x172308");
#endif

    switch (ctx->pc) {
        case 0x172330u: goto label_172330;
        default: break;
    }

    ctx->pc = 0x172308u;

    // 0x172308: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x172308u;
    {
        const bool branch_taken_0x172308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172308u;
        // 0x17230c: 0x26220098  addiu       $v0, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172308) {
            ctx->pc = 0x17233Cu;
            return;
        }
    }
    ctx->pc = 0x172310u;
    // 0x172310: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x172310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x172314: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x172314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x172318: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x172318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x17231c: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x17231cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x172320: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172320u;
    {
        const bool branch_taken_0x172320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172320) {
            ctx->pc = 0x172338u;
            return;
        }
    }
    ctx->pc = 0x172328u;
    // 0x172328: 0xc04018c  jal         func_100630
    ctx->pc = 0x172328u;
    SET_GPR_U32(ctx, 31, 0x172330u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x172328u, 0x172330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172330u;
label_172330:
    // 0x172330: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x172330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
    // 0x172334: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x172334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
    ctx->pc = 0x172338u;
}
