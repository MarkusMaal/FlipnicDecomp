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

// Function: entry_001522e8
// Address: 0x1522e8 - 0x152308
void entry_001522e8_0x1522e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001522e8_0x1522e8");
#endif

    ctx->pc = 0x1522e8u;

    // 0x1522e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1522e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1522ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1522ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1522f0: 0x0  nop
    ctx->pc = 0x1522f0u;
    // NOP
    // 0x1522f4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1522f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1522f8: 0x0  nop
    ctx->pc = 0x1522f8u;
    // NOP
    // 0x1522fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1522FCu;
    {
        const bool branch_taken_0x1522fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522FCu;
        // 0x152300: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522fc) {
            ctx->pc = 0x15230Cu;
            return;
        }
    }
    ctx->pc = 0x152304u;
    // 0x152304: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x152304u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    ctx->pc = 0x152308u;
}
