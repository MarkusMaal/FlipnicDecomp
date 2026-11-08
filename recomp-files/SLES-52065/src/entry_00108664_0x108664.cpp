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

// Function: entry_00108664
// Address: 0x108664 - 0x1086ac
void entry_00108664_0x108664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108664_0x108664");
#endif

    switch (ctx->pc) {
        case 0x10866cu: goto label_10866c;
        default: break;
    }

    ctx->pc = 0x108664u;

    // 0x108664: 0xc062d50  jal         func_18B540
    ctx->pc = 0x108664u;
    SET_GPR_U32(ctx, 31, 0x10866Cu);
    ctx->pc = 0x108668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108664u;
    // 0x108668: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x108664u, 0x10866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10866Cu;
label_10866c:
    // 0x10866c: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x10866cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x108670: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x108670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x108674: 0x2043824  and         $a3, $s0, $a0
    ctx->pc = 0x108674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x108678: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x108678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x10867c: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x10867cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x108680: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x108680u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x108684: 0x0  nop
    ctx->pc = 0x108684u;
    // NOP
    // 0x108688: 0x2010  mfhi        $a0
    ctx->pc = 0x108688u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x10868c: 0x3203ff00  andi        $v1, $s0, 0xFF00
    ctx->pc = 0x10868cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
    // 0x108690: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x108690u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x108694: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x108694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x108698: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x108698u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x10869c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10869Cu;
    {
        const bool branch_taken_0x10869c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1086A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10869Cu;
        // 0x1086a0: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10869c) {
            ctx->pc = 0x1086ACu;
            return;
        }
    }
    ctx->pc = 0x1086A4u;
    // 0x1086a4: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x1086a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x1086a8: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x1086a8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    ctx->pc = 0x1086acu;
}
