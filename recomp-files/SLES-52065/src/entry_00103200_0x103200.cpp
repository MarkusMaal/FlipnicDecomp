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

// Function: entry_00103200
// Address: 0x103200 - 0x103254
void entry_00103200_0x103200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103200_0x103200");
#endif

    switch (ctx->pc) {
        case 0x103208u: goto label_103208;
        default: break;
    }

    ctx->pc = 0x103200u;

    // 0x103200: 0xc04c734  jal         func_131CD0
    ctx->pc = 0x103200u;
    SET_GPR_U32(ctx, 31, 0x103208u);
    ctx->pc = 0x103204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103200u;
    // 0x103204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CD0u, 0x103200u, 0x103208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103208u;
label_103208:
    // 0x103208: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x103208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10320c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10320cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x103210: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x103210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x103214: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x103214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x103218: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x103218u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x10321c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x10321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x103220: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x103220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x103224: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x103224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x103228: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x103228u;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
    // 0x10322c: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x10322cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x103230: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x103230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x103234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x103234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x103238: 0x0  nop
    ctx->pc = 0x103238u;
    // NOP
    // 0x10323c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x10323cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103240: 0x0  nop
    ctx->pc = 0x103240u;
    // NOP
    // 0x103244: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x103244u;
    {
        const bool branch_taken_0x103244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x103248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103244u;
        // 0x103248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103244) {
            ctx->pc = 0x103254u;
            return;
        }
    }
    ctx->pc = 0x10324Cu;
    // 0x10324c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10324Cu;
    {
        const bool branch_taken_0x10324c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10324c) {
            ctx->pc = 0x10325Cu;
            return;
        }
    }
    ctx->pc = 0x103254u;
}
