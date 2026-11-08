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

// Function: entry_0016b2ec
// Address: 0x16b2ec - 0x16b30c
void entry_0016b2ec_0x16b2ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b2ec_0x16b2ec");
#endif

    ctx->pc = 0x16b2ecu;

    // 0x16b2ec: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16b2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x16b2f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b2f4: 0x0  nop
    ctx->pc = 0x16b2f4u;
    // NOP
    // 0x16b2f8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x16b2f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b2fc: 0x0  nop
    ctx->pc = 0x16b2fcu;
    // NOP
    // 0x16b300: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16B300u;
    {
        const bool branch_taken_0x16b300 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B300u;
        // 0x16b304: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b300) {
            ctx->pc = 0x16B30Cu;
            return;
        }
    }
    ctx->pc = 0x16B308u;
    // 0x16b308: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16b308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    ctx->pc = 0x16b30cu;
}
