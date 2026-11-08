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

// Function: entry_001feb00
// Address: 0x1feb00 - 0x1feb94
void entry_001feb00_0x1feb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001feb00_0x1feb00");
#endif

    switch (ctx->pc) {
        case 0x1feb08u: goto label_1feb08;
        case 0x1feb18u: goto label_1feb18;
        case 0x1feb90u: goto label_1feb90;
        default: break;
    }

    ctx->pc = 0x1feb00u;

    // 0x1feb00: 0xc07fe9c  jal         func_1FFA70
    ctx->pc = 0x1FEB00u;
    SET_GPR_U32(ctx, 31, 0x1FEB08u);
    ctx->pc = 0x1FEB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEB00u;
    // 0x1feb04: 0x2672fff8  addiu       $s2, $s3, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA70u, 0x1FEB00u, 0x1FEB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB08u;
label_1feb08:
    // 0x1feb08: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x1feb08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1feb0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1feb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb10: 0xc081daa  jal         func_2076A8
    ctx->pc = 0x1FEB10u;
    SET_GPR_U32(ctx, 31, 0x1FEB18u);
    ctx->pc = 0x1FEB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEB10u;
    // 0x1feb14: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076A8u, 0x1FEB10u, 0x1FEB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB18u;
label_1feb18:
    // 0x1feb18: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FEB18u;
    {
        const bool branch_taken_0x1feb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB18u;
        // 0x1feb1c: 0x2718021  addu        $s0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb18) {
            ctx->pc = 0x1FEB94u;
            return;
        }
    }
    ctx->pc = 0x1FEB20u;
    // 0x1feb20: 0x111023  negu        $v0, $s1
    ctx->pc = 0x1feb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1feb24: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1feb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1feb28: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1feb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1feb2c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1feb2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1feb30: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1feb30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1feb34: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x1feb34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1feb38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1feb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1feb3c: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x1feb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1feb40: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x1feb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1feb44: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1feb44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1feb48: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1feb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1feb4c: 0xa4800a  movz        $s0, $a1, $a0
    ctx->pc = 0x1feb4cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x1feb50: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1feb50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1feb54: 0x2123823  subu        $a3, $s0, $s2
    ctx->pc = 0x1feb54u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1feb58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1feb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb5c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1feb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1feb60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1feb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb64: 0x34c30001  ori         $v1, $a2, 0x1
    ctx->pc = 0x1feb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x1feb68: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1feb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1feb6c: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x1feb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1feb70: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1feb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1feb74: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1feb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1feb78: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1feb78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1feb7c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1feb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1feb80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1feb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1feb84: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1feb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1feb88: 0xc07f62a  jal         func_1FD8A8
    ctx->pc = 0x1FEB88u;
    SET_GPR_U32(ctx, 31, 0x1FEB90u);
    ctx->pc = 0x1FEB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEB88u;
    // 0x1feb8c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x1FEB88u, 0x1FEB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB90u;
label_1feb90:
    // 0x1feb90: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1feb90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1feb94u;
}
