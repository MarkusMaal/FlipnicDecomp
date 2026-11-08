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

// Function: entry_0013ced0
// Address: 0x13ced0 - 0x13cef4
void entry_0013ced0_0x13ced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ced0_0x13ced0");
#endif

    ctx->pc = 0x13ced0u;

    // 0x13ced0: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x13ced0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x13ced4: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x13CED4u;
    {
        const bool branch_taken_0x13ced4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ced4) {
            ctx->pc = 0x13CE74u;
            return;
        }
    }
    ctx->pc = 0x13CEDCu;
    // 0x13cedc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13cee0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13cee4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cee8: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x13cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x13ceec: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x13ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13cef0: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x13cef0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    ctx->pc = 0x13cef4u;
}
