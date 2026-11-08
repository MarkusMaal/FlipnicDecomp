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

// Function: entry_0019dde4
// Address: 0x19dde4 - 0x19de14
void entry_0019dde4_0x19dde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dde4_0x19dde4");
#endif

    switch (ctx->pc) {
        case 0x19de10u: goto label_19de10;
        default: break;
    }

    ctx->pc = 0x19dde4u;

    // 0x19dde4: 0x0  nop
    ctx->pc = 0x19dde4u;
    // NOP
    // 0x19dde8: 0x32c30001  andi        $v1, $s6, 0x1
    ctx->pc = 0x19dde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x19ddec: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x19ddecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x19ddf0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19DDF0u;
    {
        const bool branch_taken_0x19ddf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ddf0) {
            ctx->pc = 0x19DE14u;
            return;
        }
    }
    ctx->pc = 0x19DDF8u;
    // 0x19ddf8: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x19ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x19ddfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19ddfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de00: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x19de00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19de04: 0x8e650684  lw          $a1, 0x684($s3)
    ctx->pc = 0x19de04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1668)));
    // 0x19de08: 0xc064d78  jal         func_1935E0
    ctx->pc = 0x19DE08u;
    SET_GPR_U32(ctx, 31, 0x19DE10u);
    ctx->pc = 0x19DE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE08u;
    // 0x19de0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1935E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1935E0u, 0x19DE08u, 0x19DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE10u;
label_19de10:
    // 0x19de10: 0xae600784  sw          $zero, 0x784($s3)
    ctx->pc = 0x19de10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1924), GPR_U32(ctx, 0));
    ctx->pc = 0x19de14u;
}
