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

// Function: entry_0016dd14
// Address: 0x16dd14 - 0x16dd40
void entry_0016dd14_0x16dd14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dd14_0x16dd14");
#endif

    switch (ctx->pc) {
        case 0x16dd38u: goto label_16dd38;
        default: break;
    }

    ctx->pc = 0x16dd14u;

    // 0x16dd14: 0xa6620218  sh          $v0, 0x218($s3)
    ctx->pc = 0x16dd14u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 536), (uint16_t)GPR_U32(ctx, 2));
    // 0x16dd18: 0xa6600216  sh          $zero, 0x216($s3)
    ctx->pc = 0x16dd18u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 534), (uint16_t)GPR_U32(ctx, 0));
    // 0x16dd1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dd20: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x16dd20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16dd24: 0x82320022  lb          $s2, 0x22($s1)
    ctx->pc = 0x16dd24u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x16dd28: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DD28u;
    {
        const bool branch_taken_0x16dd28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16dd28) {
            ctx->pc = 0x16DD40u;
            return;
        }
    }
    ctx->pc = 0x16DD30u;
    // 0x16dd30: 0xc05b708  jal         func_16DC20
    ctx->pc = 0x16DD30u;
    SET_GPR_U32(ctx, 31, 0x16DD38u);
    ctx->pc = 0x16DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD30u;
    // 0x16dd34: 0x86240030  lh          $a0, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DC20u, 0x16DD30u, 0x16DD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD38u;
label_16dd38:
    // 0x16dd38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16DD38u;
    {
        const bool branch_taken_0x16dd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD38u;
        // 0x16dd3c: 0xe660021c  swc1        $f0, 0x21C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd38) {
            ctx->pc = 0x16DD68u;
            return;
        }
    }
    ctx->pc = 0x16DD40u;
}
