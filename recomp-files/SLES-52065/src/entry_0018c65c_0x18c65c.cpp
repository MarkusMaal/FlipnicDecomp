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

// Function: entry_0018c65c
// Address: 0x18c65c - 0x18c690
void entry_0018c65c_0x18c65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c65c_0x18c65c");
#endif

    ctx->pc = 0x18c65cu;

    // 0x18c65c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x18c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x18c660: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18c660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18c664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c668: 0x0  nop
    ctx->pc = 0x18c668u;
    // NOP
    // 0x18c66c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x18c66cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c670: 0x0  nop
    ctx->pc = 0x18c670u;
    // NOP
    // 0x18c674: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18C674u;
    {
        const bool branch_taken_0x18c674 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C674u;
        // 0x18c678: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c674) {
            ctx->pc = 0x18C690u;
            return;
        }
    }
    ctx->pc = 0x18C67Cu;
    // 0x18c67c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18c67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18c680: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c684: 0x0  nop
    ctx->pc = 0x18c684u;
    // NOP
    // 0x18c688: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x18c688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x18c68c: 0xe6000570  swc1        $f0, 0x570($s0)
    ctx->pc = 0x18c68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1392), bits); }
    ctx->pc = 0x18c690u;
}
