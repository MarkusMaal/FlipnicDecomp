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

// Function: entry_0017226c
// Address: 0x17226c - 0x17229c
void entry_0017226c_0x17226c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017226c_0x17226c");
#endif

    switch (ctx->pc) {
        case 0x172294u: goto label_172294;
        default: break;
    }

    ctx->pc = 0x17226cu;

    // 0x17226c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17226Cu;
    {
        const bool branch_taken_0x17226c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17226Cu;
        // 0x172270: 0x262200c8  addiu       $v0, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17226c) {
            ctx->pc = 0x1722A0u;
            return;
        }
    }
    ctx->pc = 0x172274u;
    // 0x172274: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x172274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x172278: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x172278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x17227c: 0xae2200e4  sw          $v0, 0xE4($s1)
    ctx->pc = 0x17227cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
    // 0x172280: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x172280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x172284: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172284u;
    {
        const bool branch_taken_0x172284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172284) {
            ctx->pc = 0x17229Cu;
            return;
        }
    }
    ctx->pc = 0x17228Cu;
    // 0x17228c: 0xc04018c  jal         func_100630
    ctx->pc = 0x17228Cu;
    SET_GPR_U32(ctx, 31, 0x172294u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x17228Cu, 0x172294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172294u;
label_172294:
    // 0x172294: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x172294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
    // 0x172298: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x172298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
    ctx->pc = 0x17229cu;
}
