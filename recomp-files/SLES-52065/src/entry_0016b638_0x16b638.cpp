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

// Function: entry_0016b638
// Address: 0x16b638 - 0x16b684
void entry_0016b638_0x16b638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b638_0x16b638");
#endif

    ctx->pc = 0x16b638u;

    // 0x16b638: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x16b638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x16b63c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16b63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x16b640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b644: 0x0  nop
    ctx->pc = 0x16b644u;
    // NOP
    // 0x16b648: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x16b648u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b64c: 0x0  nop
    ctx->pc = 0x16b64cu;
    // NOP
    // 0x16b650: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
    ctx->pc = 0x16B650u;
    {
        const bool branch_taken_0x16b650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b650) {
            ctx->pc = 0x16B74Cu;
            return;
        }
    }
    ctx->pc = 0x16B658u;
    // 0x16b658: 0xc6210298  lwc1        $f1, 0x298($s1)
    ctx->pc = 0x16b658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b65c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16b65cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b660: 0x0  nop
    ctx->pc = 0x16b660u;
    // NOP
    // 0x16b664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16b664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b668: 0x0  nop
    ctx->pc = 0x16b668u;
    // NOP
    // 0x16b66c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16B66Cu;
    {
        const bool branch_taken_0x16b66c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B66Cu;
        // 0x16b670: 0x3c023f35  lui         $v0, 0x3F35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16181 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b66c) {
            ctx->pc = 0x16B684u;
            return;
        }
    }
    ctx->pc = 0x16B674u;
    // 0x16b674: 0x3c02bf35  lui         $v0, 0xBF35
    ctx->pc = 0x16b674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48949 << 16));
    // 0x16b678: 0x344204f3  ori         $v0, $v0, 0x4F3
    ctx->pc = 0x16b678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1267);
    // 0x16b67c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B67Cu;
    {
        const bool branch_taken_0x16b67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B67Cu;
        // 0x16b680: 0xae220298  sw          $v0, 0x298($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b67c) {
            ctx->pc = 0x16B68Cu;
            return;
        }
    }
    ctx->pc = 0x16B684u;
}
