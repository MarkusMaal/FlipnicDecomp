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

// Function: entry_001b0d08
// Address: 0x1b0d08 - 0x1b0dac
void entry_001b0d08_0x1b0d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0d08_0x1b0d08");
#endif

    switch (ctx->pc) {
        case 0x1b0d10u: goto label_1b0d10;
        case 0x1b0d48u: goto label_1b0d48;
        default: break;
    }

    ctx->pc = 0x1b0d08u;

    // 0x1b0d08: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B0D08u;
    SET_GPR_U32(ctx, 31, 0x1B0D10u);
    ctx->pc = 0x1B0D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D08u;
    // 0x1b0d0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B0D08u, 0x1B0D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D10u;
label_1b0d10:
    // 0x1b0d10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0d14: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1b0d18: 0x24080180  addiu       $t0, $zero, 0x180
    ctx->pc = 0x1b0d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1b0d1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d20: 0xffb50008  sd          $s5, 0x8($sp)
    ctx->pc = 0x1b0d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 21));
    // 0x1b0d24: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b0d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b0d28: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b0d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1b0d2c: 0x24067b80  addiu       $a2, $zero, 0x7B80
    ctx->pc = 0x1b0d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31616));
    // 0x1b0d30: 0x240774c0  addiu       $a3, $zero, 0x74C0
    ctx->pc = 0x1b0d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29888));
    // 0x1b0d34: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1b0d34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b0d38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d3c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b0d3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d40: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B0D40u;
    SET_GPR_U32(ctx, 31, 0x1B0D48u);
    ctx->pc = 0x1B0D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D40u;
    // 0x1b0d44: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B0D40u, 0x1B0D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D48u;
label_1b0d48:
    // 0x1b0d48: 0x8e910008  lw          $s1, 0x8($s4)
    ctx->pc = 0x1b0d48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1b0d4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b0d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0d50: 0x8e920118  lw          $s2, 0x118($s4)
    ctx->pc = 0x1b0d50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1b0d54: 0x8e93011c  lw          $s3, 0x11C($s4)
    ctx->pc = 0x1b0d54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x1b0d58: 0x92230063  lbu         $v1, 0x63($s1)
    ctx->pc = 0x1b0d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 99)));
    // 0x1b0d5c: 0xde220060  ld          $v0, 0x60($s1)
    ctx->pc = 0x1b0d5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1b0d60: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x1b0d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
    // 0x1b0d64: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b0d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b0d68: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x1b0d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
    // 0x1b0d6c: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b0d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b0d70: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x1b0d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b0d74: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1b0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b0d78: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x1b0d78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b0d7c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0D7Cu;
    {
        const bool branch_taken_0x1b0d7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D7Cu;
        // 0x1b0d80: 0x2a900  sll         $s5, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d7c) {
            ctx->pc = 0x1B0DD0u;
            return;
        }
    }
    ctx->pc = 0x1B0D84u;
    // 0x1b0d84: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b0d88: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b0d8c: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b0d90: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0d94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0d98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0D98u;
    {
        const bool branch_taken_0x1b0d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0d98) {
            ctx->pc = 0x1B0DACu;
            return;
        }
    }
    ctx->pc = 0x1B0DA0u;
    // 0x1b0da0: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1b0da4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0da8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0dacu;
}
