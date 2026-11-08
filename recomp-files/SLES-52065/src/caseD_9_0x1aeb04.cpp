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

// Function: caseD_9
// Address: 0x1aeb04 - 0x1aeb90
void caseD_9_0x1aeb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1aeb04");
#endif

    switch (ctx->pc) {
        case 0x1aeb04u: goto label_1aeb04;
        case 0x1aeb08u: goto label_1aeb08;
        case 0x1aeb0cu: goto label_1aeb0c;
        case 0x1aeb10u: goto label_1aeb10;
        case 0x1aeb14u: goto label_1aeb14;
        case 0x1aeb18u: goto label_1aeb18;
        case 0x1aeb1cu: goto label_1aeb1c;
        case 0x1aeb20u: goto label_1aeb20;
        case 0x1aeb24u: goto label_1aeb24;
        case 0x1aeb28u: goto label_1aeb28;
        case 0x1aeb2cu: goto label_1aeb2c;
        case 0x1aeb30u: goto label_1aeb30;
        case 0x1aeb34u: goto label_1aeb34;
        case 0x1aeb38u: goto label_1aeb38;
        case 0x1aeb3cu: goto label_1aeb3c;
        case 0x1aeb40u: goto label_1aeb40;
        case 0x1aeb44u: goto label_1aeb44;
        case 0x1aeb48u: goto label_1aeb48;
        case 0x1aeb4cu: goto label_1aeb4c;
        case 0x1aeb50u: goto label_1aeb50;
        case 0x1aeb54u: goto label_1aeb54;
        case 0x1aeb58u: goto label_1aeb58;
        case 0x1aeb5cu: goto label_1aeb5c;
        case 0x1aeb60u: goto label_1aeb60;
        case 0x1aeb64u: goto label_1aeb64;
        case 0x1aeb68u: goto label_1aeb68;
        case 0x1aeb6cu: goto label_1aeb6c;
        case 0x1aeb70u: goto label_1aeb70;
        case 0x1aeb74u: goto label_1aeb74;
        case 0x1aeb78u: goto label_1aeb78;
        case 0x1aeb7cu: goto label_1aeb7c;
        case 0x1aeb80u: goto label_1aeb80;
        case 0x1aeb84u: goto label_1aeb84;
        case 0x1aeb88u: goto label_1aeb88;
        case 0x1aeb8cu: goto label_1aeb8c;
        default: break;
    }

    ctx->pc = 0x1aeb04u;

label_1aeb04:
    // 0x1aeb04: 0x8e8407e4  lw          $a0, 0x7E4($s4)
    ctx->pc = 0x1aeb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2020)));
label_1aeb08:
    // 0x1aeb08: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1aeb08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1aeb0c:
    // 0x1aeb0c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1aeb0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1aeb10:
    // 0x1aeb10: 0x320f809  jalr        $t9
label_1aeb14:
    if (ctx->pc == 0x1AEB14u) {
        ctx->pc = 0x1AEB18u;
        goto label_1aeb18;
    }
    ctx->pc = 0x1AEB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AEB18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEB10u, 0x1AEB18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEB18u;
label_1aeb18:
    // 0x1aeb18: 0xc069afc  jal         func_1A6BF0
label_1aeb1c:
    if (ctx->pc == 0x1AEB1Cu) {
        ctx->pc = 0x1AEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB18u;
        // 0x1aeb1c: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB20u;
        goto label_1aeb20;
    }
    ctx->pc = 0x1AEB18u;
    SET_GPR_U32(ctx, 31, 0x1AEB20u);
    ctx->pc = 0x1AEB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB18u;
    // 0x1aeb1c: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AEB18u, 0x1AEB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB20u;
label_1aeb20:
    // 0x1aeb20: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
label_1aeb24:
    if (ctx->pc == 0x1AEB24u) {
        ctx->pc = 0x1AEB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB20u;
        // 0x1aeb24: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB28u;
        goto label_1aeb28;
    }
    ctx->pc = 0x1AEB20u;
    {
        const bool branch_taken_0x1aeb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB20u;
        // 0x1aeb24: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb20) {
            ctx->pc = 0x1AEDB8u;
            return;
        }
    }
    ctx->pc = 0x1AEB28u;
label_1aeb28:
    // 0x1aeb28: 0xc069ae8  jal         func_1A6BA0
label_1aeb2c:
    if (ctx->pc == 0x1AEB2Cu) {
        ctx->pc = 0x1AEB30u;
        goto label_1aeb30;
    }
    ctx->pc = 0x1AEB28u;
    SET_GPR_U32(ctx, 31, 0x1AEB30u);
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AEB28u, 0x1AEB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB30u;
label_1aeb30:
    // 0x1aeb30: 0x8e8207e4  lw          $v0, 0x7E4($s4)
    ctx->pc = 0x1aeb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2020)));
label_1aeb34:
    // 0x1aeb34: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1aeb34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1aeb38:
    // 0x1aeb38: 0x8e8306b0  lw          $v1, 0x6B0($s4)
    ctx->pc = 0x1aeb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1712)));
label_1aeb3c:
    // 0x1aeb3c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1aeb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1aeb40:
    // 0x1aeb40: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1aeb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aeb44:
    // 0x1aeb44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aeb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aeb48:
    // 0x1aeb48: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1aeb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1aeb4c:
    // 0x1aeb4c: 0x8c420670  lw          $v0, 0x670($v0)
    ctx->pc = 0x1aeb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
label_1aeb50:
    // 0x1aeb50: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x1aeb50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_1aeb54:
    // 0x1aeb54: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1aeb58:
    if (ctx->pc == 0x1AEB58u) {
        ctx->pc = 0x1AEB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB54u;
        // 0x1aeb58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB5Cu;
        goto label_1aeb5c;
    }
    ctx->pc = 0x1AEB54u;
    {
        const bool branch_taken_0x1aeb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB54u;
        // 0x1aeb58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb54) {
            ctx->pc = 0x1AEB90u;
            return;
        }
    }
    ctx->pc = 0x1AEB5Cu;
label_1aeb5c:
    // 0x1aeb5c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1aeb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aeb60:
    // 0x1aeb60: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1aeb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1aeb64:
    // 0x1aeb64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aeb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1aeb68:
    // 0x1aeb68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aeb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aeb6c:
    // 0x1aeb6c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1aeb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1aeb70:
    // 0x1aeb70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aeb70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aeb74:
    // 0x1aeb74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aeb74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1aeb78:
    // 0x1aeb78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aeb78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1aeb7c:
    // 0x1aeb7c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1aeb7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1aeb80:
    // 0x1aeb80: 0xc063e08  jal         func_18F820
label_1aeb84:
    if (ctx->pc == 0x1AEB84u) {
        ctx->pc = 0x1AEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB80u;
        // 0x1aeb84: 0xae8206c0  sw          $v0, 0x6C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB88u;
        goto label_1aeb88;
    }
    ctx->pc = 0x1AEB80u;
    SET_GPR_U32(ctx, 31, 0x1AEB88u);
    ctx->pc = 0x1AEB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB80u;
    // 0x1aeb84: 0xae8206c0  sw          $v0, 0x6C0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AEB80u, 0x1AEB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB88u;
label_1aeb88:
    // 0x1aeb88: 0x1000008b  b           . + 4 + (0x8B << 2)
label_1aeb8c:
    if (ctx->pc == 0x1AEB8Cu) {
        ctx->pc = 0x1AEB90u;
        goto label_fallthrough_0x1aeb88;
    }
    ctx->pc = 0x1AEB88u;
    {
        const bool branch_taken_0x1aeb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeb88) {
            ctx->pc = 0x1AEDB8u;
            return;
        }
    }
label_fallthrough_0x1aeb88:
    ctx->pc = 0x1AEB90u;
}
