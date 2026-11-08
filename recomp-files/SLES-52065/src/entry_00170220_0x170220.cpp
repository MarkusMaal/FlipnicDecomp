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

// Function: entry_00170220
// Address: 0x170220 - 0x170288
void entry_00170220_0x170220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170220_0x170220");
#endif

    ctx->pc = 0x170220u;

    // 0x170220: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x170220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x170224: 0x712023  subu        $a0, $v1, $s1
    ctx->pc = 0x170224u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x170228: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x170228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x17022c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17022cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x170230: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x170230u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x170234: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x170234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x170238: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x170238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17023c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17023cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x170240: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x170240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x170244: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x170244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x170248: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x170248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17024c: 0xe48202e0  swc1        $f2, 0x2E0($a0)
    ctx->pc = 0x17024cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 736), bits); }
    // 0x170250: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x170250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x170254: 0xe46102e0  swc1        $f1, 0x2E0($v1)
    ctx->pc = 0x170254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 736), bits); }
    // 0x170258: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x170258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x17025c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x17025cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x170260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x170260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170264: 0x0  nop
    ctx->pc = 0x170264u;
    // NOP
    // 0x170268: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x170268u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17026c: 0x0  nop
    ctx->pc = 0x17026cu;
    // NOP
    // 0x170270: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x170270u;
    {
        const bool branch_taken_0x170270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170270) {
            ctx->pc = 0x170288u;
            return;
        }
    }
    ctx->pc = 0x170278u;
    // 0x170278: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x170278u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17027c: 0x0  nop
    ctx->pc = 0x17027cu;
    // NOP
    // 0x170280: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x170280u;
    {
        const bool branch_taken_0x170280 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x170280) {
            ctx->pc = 0x170350u;
            return;
        }
    }
    ctx->pc = 0x170288u;
}
