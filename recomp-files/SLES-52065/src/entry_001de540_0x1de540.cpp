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

// Function: entry_001de540
// Address: 0x1de540 - 0x1de564
void entry_001de540_0x1de540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de540_0x1de540");
#endif

    ctx->pc = 0x1de540u;

    // 0x1de540: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1de540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de544: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1DE544u;
    {
        const bool branch_taken_0x1de544 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE544u;
        // 0x1de548: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de544) {
            ctx->pc = 0x1DE584u;
            return;
        }
    }
    ctx->pc = 0x1DE54Cu;
    // 0x1de54c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de550: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1de554: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x1de554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de558: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1de558u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de55c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1DE55Cu;
    {
        const bool branch_taken_0x1de55c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE55Cu;
        // 0x1de560: 0x31020100  andi        $v0, $t0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de55c) {
            ctx->pc = 0x1DE588u;
            return;
        }
    }
    ctx->pc = 0x1DE564u;
}
