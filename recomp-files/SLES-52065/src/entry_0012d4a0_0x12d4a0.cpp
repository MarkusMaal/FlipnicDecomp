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

// Function: entry_0012d4a0
// Address: 0x12d4a0 - 0x12d4e8
void entry_0012d4a0_0x12d4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d4a0_0x12d4a0");
#endif

    ctx->pc = 0x12d4a0u;

    // 0x12d4a0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d4a4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x12d4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12d4a8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x12d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x12d4ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x12d4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12d4b0: 0x0  nop
    ctx->pc = 0x12d4b0u;
    // NOP
    // 0x12d4b4: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x12d4b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x12d4b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x12d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x12d4bc: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x12d4bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x12d4c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12d4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d4c4: 0x0  nop
    ctx->pc = 0x12d4c4u;
    // NOP
    // 0x12d4c8: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x12d4c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d4cc: 0x0  nop
    ctx->pc = 0x12d4ccu;
    // NOP
    // 0x12d4d0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x12D4D0u;
    {
        const bool branch_taken_0x12d4d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4D0u;
        // 0x12d4d4: 0xa4233088  sh          $v1, 0x3088($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 12424), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4d0) {
            ctx->pc = 0x12D4E8u;
            return;
        }
    }
    ctx->pc = 0x12D4D8u;
    // 0x12d4d8: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d4d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x12d4dc: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x12d4dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d4e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12D4E0u;
    {
        const bool branch_taken_0x12d4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d4e0) {
            ctx->pc = 0x12D500u;
            return;
        }
    }
    ctx->pc = 0x12D4E8u;
}
