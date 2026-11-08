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

// Function: caseD_2
// Address: 0x195354 - 0x1953a0
void caseD_2_0x195354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x195354");
#endif

    switch (ctx->pc) {
        case 0x195360u: goto label_195360;
        default: break;
    }

    ctx->pc = 0x195354u;

    // 0x195354: 0x0  nop
    ctx->pc = 0x195354u;
    // NOP
    // 0x195358: 0xc062d50  jal         func_18B540
    ctx->pc = 0x195358u;
    SET_GPR_U32(ctx, 31, 0x195360u);
    ctx->pc = 0x19535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195358u;
    // 0x19535c: 0x8e110028  lw          $s1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x195358u, 0x195360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195360u;
label_195360:
    // 0x195360: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x195360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x195364: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x195364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x195368: 0x2243824  and         $a3, $s1, $a0
    ctx->pc = 0x195368u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x19536c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x19536cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x195370: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x195370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x195374: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x195374u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x195378: 0x0  nop
    ctx->pc = 0x195378u;
    // NOP
    // 0x19537c: 0x2010  mfhi        $a0
    ctx->pc = 0x19537cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x195380: 0x3223ff00  andi        $v1, $s1, 0xFF00
    ctx->pc = 0x195380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65280);
    // 0x195384: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x195384u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x195388: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x195388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x19538c: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x19538cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x195390: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195390u;
    {
        const bool branch_taken_0x195390 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x195394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195390u;
        // 0x195394: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195390) {
            ctx->pc = 0x1953A0u;
            return;
        }
    }
    ctx->pc = 0x195398u;
    // 0x195398: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x195398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x19539c: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x19539cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    ctx->pc = 0x1953a0u;
}
