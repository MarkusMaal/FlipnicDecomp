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

// Function: entry_0013fcfc
// Address: 0x13fcfc - 0x13fd24
void entry_0013fcfc_0x13fcfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fcfc_0x13fcfc");
#endif

    ctx->pc = 0x13fcfcu;

    // 0x13fcfc: 0x0  nop
    ctx->pc = 0x13fcfcu;
    // NOP
    // 0x13fd00: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x13fd00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fd04: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x13fd04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x13fd08: 0x14e6ffea  bne         $a3, $a2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x13FD08u;
    {
        const bool branch_taken_0x13fd08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x13fd08) {
            ctx->pc = 0x13FCB4u;
            return;
        }
    }
    ctx->pc = 0x13FD10u;
    // 0x13fd10: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x13fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x13fd14: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13FD14u;
    {
        const bool branch_taken_0x13fd14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fd14) {
            ctx->pc = 0x13FD24u;
            return;
        }
    }
    ctx->pc = 0x13FD1Cu;
    // 0x13fd1c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13FD1Cu;
    SET_GPR_U32(ctx, 31, 0x13FD24u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13FD1Cu, 0x13FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD24u;
}
