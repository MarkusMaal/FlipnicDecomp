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

// Function: FUN_0011dd10
// Address: 0x11dd10 - 0x11de54
void FUN_0011dd10_0x11dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011dd10_0x11dd10");
#endif

    switch (ctx->pc) {
        case 0x11dd44u: goto label_11dd44;
        case 0x11dd50u: goto label_11dd50;
        case 0x11dd5cu: goto label_11dd5c;
        case 0x11dd74u: goto label_11dd74;
        case 0x11dd84u: goto label_11dd84;
        case 0x11dd98u: goto label_11dd98;
        case 0x11ddacu: goto label_11ddac;
        case 0x11ddbcu: goto label_11ddbc;
        case 0x11ddc8u: goto label_11ddc8;
        case 0x11de2cu: goto label_11de2c;
        case 0x11de38u: goto label_11de38;
        default: break;
    }

    ctx->pc = 0x11dd10u;

    // 0x11dd10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11dd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11dd14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11dd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11dd18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11dd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11dd1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11dd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11dd20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11dd20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11dd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11dd28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11dd28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11dd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11dd30: 0x8f8283bc  lw          $v0, -0x7C44($gp)
    ctx->pc = 0x11dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935484)));
    // 0x11dd34: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11DD34u;
    {
        const bool branch_taken_0x11dd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD34u;
        // 0x11dd38: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd34) {
            ctx->pc = 0x11DD64u;
            goto label_11dd64;
        }
    }
    ctx->pc = 0x11DD3Cu;
    // 0x11dd3c: 0xc074dca  jal         func_1D3728
    ctx->pc = 0x11DD3Cu;
    SET_GPR_U32(ctx, 31, 0x11DD44u);
    ctx->pc = 0x1D3728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3728u, 0x11DD3Cu, 0x11DD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD44u;
label_11dd44:
    // 0x11dd44: 0x3c040012  lui         $a0, 0x12
    ctx->pc = 0x11dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18 << 16));
    // 0x11dd48: 0xc075180  jal         func_1D4600
    ctx->pc = 0x11DD48u;
    SET_GPR_U32(ctx, 31, 0x11DD50u);
    ctx->pc = 0x11DD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD48u;
    // 0x11dd4c: 0x2484a100  addiu       $a0, $a0, -0x5F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4600u, 0x11DD48u, 0x11DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD50u;
label_11dd50:
    // 0x11dd50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11dd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd54: 0xc074df0  jal         func_1D37C0
    ctx->pc = 0x11DD54u;
    SET_GPR_U32(ctx, 31, 0x11DD5Cu);
    ctx->pc = 0x11DD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD54u;
    // 0x11dd58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D37C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D37C0u, 0x11DD54u, 0x11DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD5Cu;
label_11dd5c:
    // 0x11dd5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dd60: 0xaf8283bc  sw          $v0, -0x7C44($gp)
    ctx->pc = 0x11dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935484), GPR_U32(ctx, 2));
label_11dd64:
    // 0x11dd64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11dd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd68: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x11dd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x11dd6c: 0xc07c99c  jal         func_1F2670
    ctx->pc = 0x11DD6Cu;
    SET_GPR_U32(ctx, 31, 0x11DD74u);
    ctx->pc = 0x11DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD6Cu;
    // 0x11dd70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2670u, 0x11DD6Cu, 0x11DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD74u;
label_11dd74:
    // 0x11dd74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11dd74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd78: 0x26440108  addiu       $a0, $s2, 0x108
    ctx->pc = 0x11dd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x11dd7c: 0xc074e36  jal         func_1D38D8
    ctx->pc = 0x11DD7Cu;
    SET_GPR_U32(ctx, 31, 0x11DD84u);
    ctx->pc = 0x11DD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD7Cu;
    // 0x11dd80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D38D8u, 0x11DD7Cu, 0x11DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD84u;
label_11dd84:
    // 0x11dd84: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x11DD84u;
    {
        const bool branch_taken_0x11dd84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD84u;
        // 0x11dd88: 0xae4003e8  sw          $zero, 0x3E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd84) {
            ctx->pc = 0x11DDD8u;
            goto label_11ddd8;
        }
    }
    ctx->pc = 0x11DD8Cu;
    // 0x11dd8c: 0x264403ec  addiu       $a0, $s2, 0x3EC
    ctx->pc = 0x11dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1004));
    // 0x11dd90: 0xc080702  jal         func_201C08
    ctx->pc = 0x11DD90u;
    SET_GPR_U32(ctx, 31, 0x11DD98u);
    ctx->pc = 0x11DD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD90u;
    // 0x11dd94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11DD90u, 0x11DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD98u;
label_11dd98:
    // 0x11dd98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11dd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11dd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dda0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11dda0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dda4: 0xc046b94  jal         func_11AE50
    ctx->pc = 0x11DDA4u;
    SET_GPR_U32(ctx, 31, 0x11DDACu);
    ctx->pc = 0x11DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DDA4u;
    // 0x11dda8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE50u, 0x11DDA4u, 0x11DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDACu;
label_11ddac:
    // 0x11ddac: 0xae4203e8  sw          $v0, 0x3E8($s2)
    ctx->pc = 0x11ddacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1000), GPR_U32(ctx, 2));
    // 0x11ddb0: 0x8e4203e8  lw          $v0, 0x3E8($s2)
    ctx->pc = 0x11ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1000)));
    // 0x11ddb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11DDB4u;
    {
        const bool branch_taken_0x11ddb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ddb4) {
            ctx->pc = 0x11DDD8u;
            goto label_11ddd8;
        }
    }
    ctx->pc = 0x11DDBCu;
label_11ddbc:
    // 0x11ddbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ddbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ddc0: 0xc046c90  jal         func_11B240
    ctx->pc = 0x11DDC0u;
    SET_GPR_U32(ctx, 31, 0x11DDC8u);
    ctx->pc = 0x11DDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DDC0u;
    // 0x11ddc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B240u, 0x11DDC0u, 0x11DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDC8u;
label_11ddc8:
    // 0x11ddc8: 0x0  nop
    ctx->pc = 0x11ddc8u;
    // NOP
    // 0x11ddcc: 0x0  nop
    ctx->pc = 0x11ddccu;
    // NOP
    // 0x11ddd0: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11DDD0u;
    {
        const bool branch_taken_0x11ddd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ddd0) {
            ctx->pc = 0x11DDBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ddbc;
        }
    }
    ctx->pc = 0x11DDD8u;
label_11ddd8:
    // 0x11ddd8: 0x8e4203e8  lw          $v0, 0x3E8($s2)
    ctx->pc = 0x11ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1000)));
    // 0x11dddc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11DDDCu;
    {
        const bool branch_taken_0x11dddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11dddc) {
            ctx->pc = 0x11DE10u;
            goto label_11de10;
        }
    }
    ctx->pc = 0x11DDE4u;
    // 0x11dde4: 0x8e420420  lw          $v0, 0x420($s2)
    ctx->pc = 0x11dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1056)));
    // 0x11dde8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DDE8u;
    {
        const bool branch_taken_0x11dde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDE8u;
        // 0x11ddec: 0x26620004  addiu       $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dde8) {
            ctx->pc = 0x11DDFCu;
            goto label_11ddfc;
        }
    }
    ctx->pc = 0x11DDF0u;
    // 0x11ddf0: 0x2662007c  addiu       $v0, $s3, 0x7C
    ctx->pc = 0x11ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 124));
    // 0x11ddf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11DDF4u;
    {
        const bool branch_taken_0x11ddf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDF4u;
        // 0x11ddf8: 0xae4203e8  sw          $v0, 0x3E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ddf4) {
            ctx->pc = 0x11DE00u;
            goto label_11de00;
        }
    }
    ctx->pc = 0x11DDFCu;
label_11ddfc:
    // 0x11ddfc: 0xae4203e8  sw          $v0, 0x3E8($s2)
    ctx->pc = 0x11ddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1000), GPR_U32(ctx, 2));
label_11de00:
    // 0x11de00: 0xa24003ec  sb          $zero, 0x3EC($s2)
    ctx->pc = 0x11de00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1004), (uint8_t)GPR_U32(ctx, 0));
    // 0x11de04: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x11de04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x11de08: 0x8e4203e8  lw          $v0, 0x3E8($s2)
    ctx->pc = 0x11de08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1000)));
    // 0x11de0c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x11de0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_11de10:
    // 0x11de10: 0x8e4503e8  lw          $a1, 0x3E8($s2)
    ctx->pc = 0x11de10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1000)));
    // 0x11de14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11de14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de18: 0x26440108  addiu       $a0, $s2, 0x108
    ctx->pc = 0x11de18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x11de1c: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x11de1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x11de20: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x11de20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x11de24: 0xc074f10  jal         func_1D3C40
    ctx->pc = 0x11DE24u;
    SET_GPR_U32(ctx, 31, 0x11DE2Cu);
    ctx->pc = 0x11DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE24u;
    // 0x11de28: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C40u, 0x11DE24u, 0x11DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE2Cu;
label_11de2c:
    // 0x11de2c: 0x26440108  addiu       $a0, $s2, 0x108
    ctx->pc = 0x11de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x11de30: 0xc074f7a  jal         func_1D3DE8
    ctx->pc = 0x11DE30u;
    SET_GPR_U32(ctx, 31, 0x11DE38u);
    ctx->pc = 0x11DE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE30u;
    // 0x11de34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3DE8u, 0x11DE30u, 0x11DE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE38u;
label_11de38:
    // 0x11de38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11de38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11de3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11de3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11de40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11de40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11de44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11de44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11de48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11de48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11de4c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE4Cu;
        // 0x11de50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DE54u;
}
