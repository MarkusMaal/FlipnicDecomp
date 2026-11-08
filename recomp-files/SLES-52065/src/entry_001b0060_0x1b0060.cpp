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

// Function: entry_001b0060
// Address: 0x1b0060 - 0x1b0110
void entry_001b0060_0x1b0060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0060_0x1b0060");
#endif

    switch (ctx->pc) {
        case 0x1b0068u: goto label_1b0068;
        case 0x1b00a0u: goto label_1b00a0;
        default: break;
    }

    ctx->pc = 0x1b0060u;

    // 0x1b0060: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B0060u;
    SET_GPR_U32(ctx, 31, 0x1B0068u);
    ctx->pc = 0x1B0064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0060u;
    // 0x1b0064: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B0060u, 0x1B0068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0068u;
label_1b0068:
    // 0x1b0068: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x1b0068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    // 0x1b006c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b006cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1b0070: 0xffb60008  sd          $s6, 0x8($sp)
    ctx->pc = 0x1b0070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 22));
    // 0x1b0074: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b0074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b0078: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1b0078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x1b007c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b007cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0080: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x1b0080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b0084: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b0084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1b0088: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1b0088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b008c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1b008cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0090: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1b0090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0094: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b0094u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0098: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B0098u;
    SET_GPR_U32(ctx, 31, 0x1B00A0u);
    ctx->pc = 0x1B009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0098u;
    // 0x1b009c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B0098u, 0x1B00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B00A0u;
label_1b00a0:
    // 0x1b00a0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1b00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b00a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b00a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b00a8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1b00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1b00ac: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1b00acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1b00b0: 0x8e910008  lw          $s1, 0x8($s4)
    ctx->pc = 0x1b00b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1b00b4: 0x8e900118  lw          $s0, 0x118($s4)
    ctx->pc = 0x1b00b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1b00b8: 0x8e92011c  lw          $s2, 0x11C($s4)
    ctx->pc = 0x1b00b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x1b00bc: 0x92230063  lbu         $v1, 0x63($s1)
    ctx->pc = 0x1b00bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 99)));
    // 0x1b00c0: 0xde220060  ld          $v0, 0x60($s1)
    ctx->pc = 0x1b00c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1b00c4: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x1b00c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
    // 0x1b00c8: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b00c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b00cc: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x1b00ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
    // 0x1b00d0: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b00d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b00d4: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x1b00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b00d8: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1b00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b00dc: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x1b00dcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b00e0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B00E0u;
    {
        const bool branch_taken_0x1b00e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00E0u;
        // 0x1b00e4: 0x2b100  sll         $s6, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00e0) {
            ctx->pc = 0x1B0134u;
            return;
        }
    }
    ctx->pc = 0x1B00E8u;
    // 0x1b00e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b00ec: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b00ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b00f0: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b00f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b00f4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b00f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b00f8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b00f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b00fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B00FCu;
    {
        const bool branch_taken_0x1b00fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b00fc) {
            ctx->pc = 0x1B0110u;
            return;
        }
    }
    ctx->pc = 0x1B0104u;
    // 0x1b0104: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b0104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b0108: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b010c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b010cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0110u;
}
