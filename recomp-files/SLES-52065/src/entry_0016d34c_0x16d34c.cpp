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

// Function: entry_0016d34c
// Address: 0x16d34c - 0x16d37c
void entry_0016d34c_0x16d34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d34c_0x16d34c");
#endif

    ctx->pc = 0x16d34cu;

    // 0x16d34c: 0x0  nop
    ctx->pc = 0x16d34cu;
    // NOP
    // 0x16d350: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16d350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16d354: 0x0  nop
    ctx->pc = 0x16d354u;
    // NOP
    // 0x16d358: 0x0  nop
    ctx->pc = 0x16d358u;
    // NOP
    // 0x16d35c: 0x4500fffa  bc1f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x16D35Cu;
    {
        const bool branch_taken_0x16d35c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d35c) {
            ctx->pc = 0x16D348u;
            return;
        }
    }
    ctx->pc = 0x16D364u;
    // 0x16d364: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16d364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x16d368: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16d368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16d36c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16d36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16d370: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16d370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16d374: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16D374u;
    {
        const bool branch_taken_0x16d374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d374) {
            ctx->pc = 0x16D380u;
            return;
        }
    }
    ctx->pc = 0x16D37Cu;
}
