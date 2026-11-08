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

// Function: entry_001632ec
// Address: 0x1632ec - 0x163338
void entry_001632ec_0x1632ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001632ec_0x1632ec");
#endif

    switch (ctx->pc) {
        case 0x16330cu: goto label_16330c;
        default: break;
    }

    ctx->pc = 0x1632ecu;

    // 0x1632ec: 0x8e2301f0  lw          $v1, 0x1F0($s1)
    ctx->pc = 0x1632ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x1632f0: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1632f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1632f4: 0x152900  sll         $a1, $s5, 4
    ctx->pc = 0x1632f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1632f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1632f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1632fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1632fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163300: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x163300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x163304: 0xc054c44  jal         func_153110
    ctx->pc = 0x163304u;
    SET_GPR_U32(ctx, 31, 0x16330Cu);
    ctx->pc = 0x163308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163304u;
    // 0x163308: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153110u, 0x163304u, 0x16330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16330Cu;
label_16330c:
    // 0x16330c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x16330cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x163310: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163314: 0x0  nop
    ctx->pc = 0x163314u;
    // NOP
    // 0x163318: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x163318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16331c: 0x0  nop
    ctx->pc = 0x16331cu;
    // NOP
    // 0x163320: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x163320u;
    {
        const bool branch_taken_0x163320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163320) {
            ctx->pc = 0x163338u;
            return;
        }
    }
    ctx->pc = 0x163328u;
    // 0x163328: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x163328u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16332c: 0x7e060360  sq          $a2, 0x360($s0)
    ctx->pc = 0x16332cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 864), GPR_VEC(ctx, 6));
    // 0x163330: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x163330u;
    {
        const bool branch_taken_0x163330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163330u;
        // 0x163334: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163330) {
            ctx->pc = 0x1633BCu;
            return;
        }
    }
    ctx->pc = 0x163338u;
}
