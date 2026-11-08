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

// Function: entry_00198afc
// Address: 0x198afc - 0x198b18
void entry_00198afc_0x198afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198afc_0x198afc");
#endif

    ctx->pc = 0x198afcu;

    // 0x198afc: 0x0  nop
    ctx->pc = 0x198afcu;
    // NOP
    // 0x198b00: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x198b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x198b04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x198b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x198b08: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x198B08u;
    {
        const bool branch_taken_0x198b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x198b08) {
            ctx->pc = 0x198B18u;
            return;
        }
    }
    ctx->pc = 0x198B10u;
    // 0x198b10: 0xc064ee0  jal         func_193B80
    ctx->pc = 0x198B10u;
    SET_GPR_U32(ctx, 31, 0x198B18u);
    ctx->pc = 0x198B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B10u;
    // 0x198b14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x198B10u, 0x198B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B18u;
}
