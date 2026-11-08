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

// Function: entry_0017dff4
// Address: 0x17dff4 - 0x17e03c
void entry_0017dff4_0x17dff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dff4_0x17dff4");
#endif

    ctx->pc = 0x17dff4u;

    // 0x17dff4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17dff8: 0x17c2001c  bne         $fp, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x17DFF8u;
    {
        const bool branch_taken_0x17dff8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x17dff8) {
            ctx->pc = 0x17E06Cu;
            return;
        }
    }
    ctx->pc = 0x17E000u;
    // 0x17e000: 0x16e2001a  bne         $s7, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x17E000u;
    {
        const bool branch_taken_0x17e000 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E000u;
        // 0x17e004: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e000) {
            ctx->pc = 0x17E06Cu;
            return;
        }
    }
    ctx->pc = 0x17E008u;
    // 0x17e008: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17e008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17e00c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17e010: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17e014: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17e014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17e018: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17e018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17e01c: 0x2463ffc4  addiu       $v1, $v1, -0x3C
    ctx->pc = 0x17e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
    // 0x17e020: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x17e020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x17e024: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17e024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e02c: 0x0  nop
    ctx->pc = 0x17e02cu;
    // NOP
    // 0x17e030: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x17e030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x17e034: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17E034u;
    {
        const bool branch_taken_0x17e034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E034u;
        // 0x17e038: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e034) {
            ctx->pc = 0x17E06Cu;
            return;
        }
    }
    ctx->pc = 0x17E03Cu;
}
