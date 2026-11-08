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

// Function: entry_00162ae4
// Address: 0x162ae4 - 0x162b38
void entry_00162ae4_0x162ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162ae4_0x162ae4");
#endif

    ctx->pc = 0x162ae4u;

    // 0x162ae4: 0xc6240334  lwc1        $f4, 0x334($s1)
    ctx->pc = 0x162ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x162ae8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x162ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x162aec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x162aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x162af0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x162af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x162af4: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x162af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x162af8: 0x3c023fb3  lui         $v0, 0x3FB3
    ctx->pc = 0x162af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
    // 0x162afc: 0xc62202f0  lwc1        $f2, 0x2F0($s1)
    ctx->pc = 0x162afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x162b00: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x162b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x162b04: 0x86420220  lh          $v0, 0x220($s2)
    ctx->pc = 0x162b04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x162b08: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x162b08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162b0c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x162b0cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x162b10: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x162b10u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x162b14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x162b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162b18: 0x0  nop
    ctx->pc = 0x162b18u;
    // NOP
    // 0x162b1c: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x162b1cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x162b20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162B20u;
    {
        const bool branch_taken_0x162b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B20u;
        // 0x162b24: 0x4615035c  madd.s      $f13, $f0, $f21 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b20) {
            ctx->pc = 0x162B38u;
            return;
        }
    }
    ctx->pc = 0x162B28u;
    // 0x162b28: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x162b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x162b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162b30: 0x0  nop
    ctx->pc = 0x162b30u;
    // NOP
    // 0x162b34: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x162b34u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->pc = 0x162b38u;
}
