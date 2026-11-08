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

// Function: FUN_0011be50
// Address: 0x11be50 - 0x11bf94
void FUN_0011be50_0x11be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011be50_0x11be50");
#endif

    switch (ctx->pc) {
        case 0x11be94u: goto label_11be94;
        case 0x11bf14u: goto label_11bf14;
        case 0x11bf40u: goto label_11bf40;
        case 0x11bf58u: goto label_11bf58;
        case 0x11bf84u: goto label_11bf84;
        default: break;
    }

    ctx->pc = 0x11be50u;

    // 0x11be50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11be54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11be54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11be58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11be5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11be5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11be60: 0xac820068  sw          $v0, 0x68($a0)
    ctx->pc = 0x11be60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
    // 0x11be64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11be64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be68: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x11be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x11be6c: 0x94420008  lhu         $v0, 0x8($v0)
    ctx->pc = 0x11be6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11be70: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x11be70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x11be74: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x11be74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x11be78: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x11be78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x11be7c: 0xac82005c  sw          $v0, 0x5C($a0)
    ctx->pc = 0x11be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
    // 0x11be80: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x11be80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x11be84: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x11be84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11be88: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x11be88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x11be8c: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11BE8Cu;
    SET_GPR_U32(ctx, 31, 0x11BE94u);
    ctx->pc = 0x11BE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE8Cu;
    // 0x11be90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11BE8Cu, 0x11BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE94u;
label_11be94:
    // 0x11be94: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x11be94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x11be98: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x11be98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x11be9c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BE9Cu;
    {
        const bool branch_taken_0x11be9c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE9Cu;
        // 0x11bea0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be9c) {
            ctx->pc = 0x11BEACu;
            goto label_11beac;
        }
    }
    ctx->pc = 0x11BEA4u;
    // 0x11bea4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x11bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x11bea8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x11bea8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_11beac:
    // 0x11beac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x11beacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11beb0: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x11beb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x11beb4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BEB4u;
    {
        const bool branch_taken_0x11beb4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEB4u;
        // 0x11beb8: 0x2113f  dsra32      $v0, $v0, 4 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11beb4) {
            ctx->pc = 0x11BEC4u;
            goto label_11bec4;
        }
    }
    ctx->pc = 0x11BEBCu;
    // 0x11bebc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x11bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x11bec0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x11bec0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_11bec4:
    // 0x11bec4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x11bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x11bec8: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x11bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x11becc: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x11beccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x11bed0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BED0u;
    {
        const bool branch_taken_0x11bed0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BED0u;
        // 0x11bed4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bed0) {
            ctx->pc = 0x11BEE0u;
            goto label_11bee0;
        }
    }
    ctx->pc = 0x11BED8u;
    // 0x11bed8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x11bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x11bedc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x11bedcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_11bee0:
    // 0x11bee0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x11bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11bee4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x11bee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x11bee8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BEE8u;
    {
        const bool branch_taken_0x11bee8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEE8u;
        // 0x11beec: 0x2113f  dsra32      $v0, $v0, 4 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bee8) {
            ctx->pc = 0x11BEF8u;
            goto label_11bef8;
        }
    }
    ctx->pc = 0x11BEF0u;
    // 0x11bef0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x11bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x11bef4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x11bef4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_11bef8:
    // 0x11bef8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x11bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x11befc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11befcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11bf00: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x11bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x11bf04: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x11bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x11bf08: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x11bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x11bf0c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11BF0Cu;
    SET_GPR_U32(ctx, 31, 0x11BF14u);
    ctx->pc = 0x11BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF0Cu;
    // 0x11bf10: 0x622818  mult        $a1, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11BF0Cu, 0x11BF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF14u;
label_11bf14:
    // 0x11bf14: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x11bf14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x11bf18: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x11bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x11bf1c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BF1Cu;
    {
        const bool branch_taken_0x11bf1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bf1c) {
            ctx->pc = 0x11BF40u;
            goto label_11bf40;
        }
    }
    ctx->pc = 0x11BF24u;
    // 0x11bf24: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x11bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x11bf28: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x11bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x11bf2c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x11bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x11bf30: 0x2484e780  addiu       $a0, $a0, -0x1880
    ctx->pc = 0x11bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961024));
    // 0x11bf34: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x11bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x11bf38: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x11BF38u;
    SET_GPR_U32(ctx, 31, 0x11BF40u);
    ctx->pc = 0x11BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF38u;
    // 0x11bf3c: 0x622818  mult        $a1, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x11BF38u, 0x11BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF40u;
label_11bf40:
    // 0x11bf40: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x11bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x11bf44: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11bf48: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x11bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x11bf4c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x11bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x11bf50: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11BF50u;
    SET_GPR_U32(ctx, 31, 0x11BF58u);
    ctx->pc = 0x11BF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF50u;
    // 0x11bf54: 0x622818  mult        $a1, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11BF50u, 0x11BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF58u;
label_11bf58:
    // 0x11bf58: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x11bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x11bf5c: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x11bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x11bf60: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BF60u;
    {
        const bool branch_taken_0x11bf60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bf60) {
            ctx->pc = 0x11BF84u;
            goto label_11bf84;
        }
    }
    ctx->pc = 0x11BF68u;
    // 0x11bf68: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x11bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x11bf6c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x11bf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x11bf70: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x11bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x11bf74: 0x2484e7d0  addiu       $a0, $a0, -0x1830
    ctx->pc = 0x11bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961104));
    // 0x11bf78: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x11bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x11bf7c: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x11BF7Cu;
    SET_GPR_U32(ctx, 31, 0x11BF84u);
    ctx->pc = 0x11BF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF7Cu;
    // 0x11bf80: 0x622818  mult        $a1, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x11BF7Cu, 0x11BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF84u;
label_11bf84:
    // 0x11bf84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11bf84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bf88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11bf88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bf8c: 0x3e00008  jr          $ra
    ctx->pc = 0x11BF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF8Cu;
        // 0x11bf90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BF94u;
}
