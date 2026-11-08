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

// Function: entry_0013dc10
// Address: 0x13dc10 - 0x13dc2c
void entry_0013dc10_0x13dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dc10_0x13dc10");
#endif

    switch (ctx->pc) {
        case 0x13dc20u: goto label_13dc20;
        default: break;
    }

    ctx->pc = 0x13dc10u;

label_13dc10:
    // 0x13dc10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13dc10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13dc14:
    // 0x13dc14: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x13dc14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_13dc18:
    // 0x13dc18: 0x320f809  jalr        $t9
label_13dc1c:
    if (ctx->pc == 0x13DC1Cu) {
        ctx->pc = 0x13DC20u;
        goto label_13dc20;
    }
    ctx->pc = 0x13DC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DC20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DC18u, 0x13DC20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DC20u;
label_13dc20:
    // 0x13dc20: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x13dc20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_13dc24:
    // 0x13dc24: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x13dc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_13dc28:
    // 0x13dc28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13dc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x13dc2cu;
}
