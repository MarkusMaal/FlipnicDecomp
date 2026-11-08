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

// Function: entry_0010853c
// Address: 0x10853c - 0x108590
void entry_0010853c_0x10853c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010853c_0x10853c");
#endif

    switch (ctx->pc) {
        case 0x108550u: goto label_108550;
        default: break;
    }

    ctx->pc = 0x10853cu;

    // 0x10853c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x10853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x108540: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x108540u;
    {
        const bool branch_taken_0x108540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108540) {
            ctx->pc = 0x1085A8u;
            return;
        }
    }
    ctx->pc = 0x108548u;
    // 0x108548: 0xc062d50  jal         func_18B540
    ctx->pc = 0x108548u;
    SET_GPR_U32(ctx, 31, 0x108550u);
    ctx->pc = 0x10854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108548u;
    // 0x10854c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x108548u, 0x108550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108550u;
label_108550:
    // 0x108550: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x108550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x108554: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x108554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x108558: 0x2043824  and         $a3, $s0, $a0
    ctx->pc = 0x108558u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x10855c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x10855cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x108560: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x108560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x108564: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x108564u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x108568: 0x0  nop
    ctx->pc = 0x108568u;
    // NOP
    // 0x10856c: 0x2010  mfhi        $a0
    ctx->pc = 0x10856cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x108570: 0x3203ff00  andi        $v1, $s0, 0xFF00
    ctx->pc = 0x108570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
    // 0x108574: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x108574u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x108578: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x108578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x10857c: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x10857cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x108580: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108580u;
    {
        const bool branch_taken_0x108580 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x108584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108580u;
        // 0x108584: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108580) {
            ctx->pc = 0x108590u;
            return;
        }
    }
    ctx->pc = 0x108588u;
    // 0x108588: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x108588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x10858c: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x10858cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    ctx->pc = 0x108590u;
}
