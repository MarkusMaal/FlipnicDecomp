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

// Function: FUN_0011a100
// Address: 0x11a100 - 0x11a2e4
void FUN_0011a100_0x11a100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a100_0x11a100");
#endif

    switch (ctx->pc) {
        case 0x11a12cu: goto label_11a12c;
        case 0x11a1c8u: goto label_11a1c8;
        case 0x11a1d4u: goto label_11a1d4;
        case 0x11a1d8u: goto label_11a1d8;
        case 0x11a1e0u: goto label_11a1e0;
        case 0x11a1fcu: goto label_11a1fc;
        case 0x11a258u: goto label_11a258;
        case 0x11a264u: goto label_11a264;
        case 0x11a268u: goto label_11a268;
        case 0x11a270u: goto label_11a270;
        case 0x11a28cu: goto label_11a28c;
        default: break;
    }

    ctx->pc = 0x11a100u;

    // 0x11a100: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11a100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11a104: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11a104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11a108: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11a108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11a10c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11a10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11a110: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11a110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a114: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11a114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11a118: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11a118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a11c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11a11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11a120: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x11a120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a124: 0xc074f7e  jal         func_1D3DF8
    ctx->pc = 0x11A124u;
    SET_GPR_U32(ctx, 31, 0x11A12Cu);
    ctx->pc = 0x11A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A124u;
    // 0x11a128: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3DF8u, 0x11A124u, 0x11A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A12Cu;
label_11a12c:
    // 0x11a12c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a130: 0x12850060  beq         $s4, $a1, . + 4 + (0x60 << 2)
    ctx->pc = 0x11A130u;
    {
        const bool branch_taken_0x11a130 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 5));
        ctx->pc = 0x11A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A130u;
        // 0x11a134: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a130) {
            ctx->pc = 0x11A2B4u;
            goto label_11a2b4;
        }
    }
    ctx->pc = 0x11A138u;
    // 0x11a138: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11a138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11a13c: 0x1282005b  beq         $s4, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x11A13Cu;
    {
        const bool branch_taken_0x11a13c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x11A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A13Cu;
        // 0x11a140: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a13c) {
            ctx->pc = 0x11A2ACu;
            goto label_11a2ac;
        }
    }
    ctx->pc = 0x11A144u;
    // 0x11a144: 0x12840003  beq         $s4, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A144u;
    {
        const bool branch_taken_0x11a144 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x11a144) {
            ctx->pc = 0x11A154u;
            goto label_11a154;
        }
    }
    ctx->pc = 0x11A14Cu;
    // 0x11a14c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x11A14Cu;
    {
        const bool branch_taken_0x11a14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A14Cu;
        // 0x11a150: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a14c) {
            ctx->pc = 0x11A2C4u;
            goto label_11a2c4;
        }
    }
    ctx->pc = 0x11A154u;
label_11a154:
    // 0x11a154: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x11a154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11a158: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11a158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11a15c: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x11A15Cu;
    {
        const bool branch_taken_0x11a15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11a15c) {
            ctx->pc = 0x11A234u;
            goto label_11a234;
        }
    }
    ctx->pc = 0x11A164u;
    // 0x11a164: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x11A164u;
    {
        const bool branch_taken_0x11a164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x11A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A164u;
        // 0x11a168: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a164) {
            ctx->pc = 0x11A1A4u;
            goto label_11a1a4;
        }
    }
    ctx->pc = 0x11A16Cu;
    // 0x11a16c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A16Cu;
    {
        const bool branch_taken_0x11a16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11a16c) {
            ctx->pc = 0x11A184u;
            goto label_11a184;
        }
    }
    ctx->pc = 0x11A174u;
    // 0x11a174: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A174u;
    {
        const bool branch_taken_0x11a174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x11a174) {
            ctx->pc = 0x11A184u;
            goto label_11a184;
        }
    }
    ctx->pc = 0x11A17Cu;
    // 0x11a17c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x11A17Cu;
    {
        const bool branch_taken_0x11a17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a17c) {
            ctx->pc = 0x11A2C0u;
            goto label_11a2c0;
        }
    }
    ctx->pc = 0x11A184u;
label_11a184:
    // 0x11a184: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x11a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x11a188: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x11a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x11a18c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a190: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x11a190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x11a194: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A194u;
    {
        const bool branch_taken_0x11a194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A194u;
        // 0x11a198: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a194) {
            ctx->pc = 0x11A1A4u;
            goto label_11a1a4;
        }
    }
    ctx->pc = 0x11A19Cu;
    // 0x11a19c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x11A19Cu;
    {
        const bool branch_taken_0x11a19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a19c) {
            ctx->pc = 0x11A2C0u;
            goto label_11a2c0;
        }
    }
    ctx->pc = 0x11A1A4u;
label_11a1a4:
    // 0x11a1a4: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x11a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x11a1a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11a1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1ac: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x11a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x11a1b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a1b4: 0xafb30064  sw          $s3, 0x64($sp)
    ctx->pc = 0x11a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 19));
    // 0x11a1b8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x11a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x11a1bc: 0xafb20068  sw          $s2, 0x68($sp)
    ctx->pc = 0x11a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 18));
    // 0x11a1c0: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11A1C0u;
    SET_GPR_U32(ctx, 31, 0x11A1C8u);
    ctx->pc = 0x11A1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1C0u;
    // 0x11a1c4: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11A1C0u, 0x11A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1C8u;
label_11a1c8:
    // 0x11a1c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x11a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11a1cc: 0xc07ae78  jal         func_1EB9E0
    ctx->pc = 0x11A1CCu;
    SET_GPR_U32(ctx, 31, 0x11A1D4u);
    ctx->pc = 0x11A1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1CCu;
    // 0x11a1d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9E0u, 0x11A1CCu, 0x11A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1D4u;
label_11a1d4:
    // 0x11a1d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a1d8:
    // 0x11a1d8: 0xc07ae70  jal         func_1EB9C0
    ctx->pc = 0x11A1D8u;
    SET_GPR_U32(ctx, 31, 0x11A1E0u);
    ctx->pc = 0x11A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1D8u;
    // 0x11a1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9C0u, 0x11A1D8u, 0x11A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1E0u;
label_11a1e0:
    // 0x11a1e0: 0x0  nop
    ctx->pc = 0x11a1e0u;
    // NOP
    // 0x11a1e4: 0x0  nop
    ctx->pc = 0x11a1e4u;
    // NOP
    // 0x11a1e8: 0x0  nop
    ctx->pc = 0x11a1e8u;
    // NOP
    // 0x11a1ec: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A1ECu;
    {
        const bool branch_taken_0x11a1ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11a1ec) {
            ctx->pc = 0x11A1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a1d8;
        }
    }
    ctx->pc = 0x11A1F4u;
    // 0x11a1f4: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11A1F4u;
    SET_GPR_U32(ctx, 31, 0x11A1FCu);
    ctx->pc = 0x11A1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1F4u;
    // 0x11a1f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11A1F4u, 0x11A1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1FCu;
label_11a1fc:
    // 0x11a1fc: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x11a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x11a200: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x11a200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x11a204: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x11a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x11a208: 0xae2300c0  sw          $v1, 0xC0($s1)
    ctx->pc = 0x11a208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 3));
    // 0x11a20c: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x11a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x11a210: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x11a210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x11a214: 0xae2300bc  sw          $v1, 0xBC($s1)
    ctx->pc = 0x11a214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
    // 0x11a218: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x11a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x11a21c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x11a21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a220: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11A220u;
    {
        const bool branch_taken_0x11a220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A220u;
        // 0x11a224: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a220) {
            ctx->pc = 0x11A22Cu;
            goto label_11a22c;
        }
    }
    ctx->pc = 0x11A228u;
    // 0x11a228: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x11a228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_11a22c:
    // 0x11a22c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x11A22Cu;
    {
        const bool branch_taken_0x11a22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a22c) {
            ctx->pc = 0x11A2C0u;
            goto label_11a2c0;
        }
    }
    ctx->pc = 0x11A234u;
label_11a234:
    // 0x11a234: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x11a234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x11a238: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11a238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a23c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x11a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x11a240: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11a240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a244: 0xafb30074  sw          $s3, 0x74($sp)
    ctx->pc = 0x11a244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 19));
    // 0x11a248: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x11a248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x11a24c: 0xafb20078  sw          $s2, 0x78($sp)
    ctx->pc = 0x11a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 18));
    // 0x11a250: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11A250u;
    SET_GPR_U32(ctx, 31, 0x11A258u);
    ctx->pc = 0x11A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A250u;
    // 0x11a254: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11A250u, 0x11A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A258u;
label_11a258:
    // 0x11a258: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x11a258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x11a25c: 0xc07ae78  jal         func_1EB9E0
    ctx->pc = 0x11A25Cu;
    SET_GPR_U32(ctx, 31, 0x11A264u);
    ctx->pc = 0x11A260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A25Cu;
    // 0x11a260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9E0u, 0x11A25Cu, 0x11A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A264u;
label_11a264:
    // 0x11a264: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a268:
    // 0x11a268: 0xc07ae70  jal         func_1EB9C0
    ctx->pc = 0x11A268u;
    SET_GPR_U32(ctx, 31, 0x11A270u);
    ctx->pc = 0x11A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A268u;
    // 0x11a26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9C0u, 0x11A268u, 0x11A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A270u;
label_11a270:
    // 0x11a270: 0x0  nop
    ctx->pc = 0x11a270u;
    // NOP
    // 0x11a274: 0x0  nop
    ctx->pc = 0x11a274u;
    // NOP
    // 0x11a278: 0x0  nop
    ctx->pc = 0x11a278u;
    // NOP
    // 0x11a27c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A27Cu;
    {
        const bool branch_taken_0x11a27c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11a27c) {
            ctx->pc = 0x11A268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a268;
        }
    }
    ctx->pc = 0x11A284u;
    // 0x11a284: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11A284u;
    SET_GPR_U32(ctx, 31, 0x11A28Cu);
    ctx->pc = 0x11A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A284u;
    // 0x11a288: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11A284u, 0x11A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A28Cu;
label_11a28c:
    // 0x11a28c: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x11a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x11a290: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11a290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a294: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x11a294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x11a298: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x11a298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x11a29c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x11a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x11a2a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x11a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x11a2a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11A2A4u;
    {
        const bool branch_taken_0x11a2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2A4u;
        // 0x11a2a8: 0xae2200bc  sw          $v0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2a4) {
            ctx->pc = 0x11A2C0u;
            goto label_11a2c0;
        }
    }
    ctx->pc = 0x11A2ACu;
label_11a2ac:
    // 0x11a2ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11A2ACu;
    {
        const bool branch_taken_0x11a2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2ACu;
        // 0x11a2b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2ac) {
            ctx->pc = 0x11A2C0u;
            goto label_11a2c0;
        }
    }
    ctx->pc = 0x11A2B4u;
label_11a2b4:
    // 0x11a2b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a2b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11a2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2bc: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x11a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_11a2c0:
    // 0x11a2c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11a2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a2c4:
    // 0x11a2c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11a2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a2c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11a2c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a2cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11a2ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a2d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11a2d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a2d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11a2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a2d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11a2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x11A2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2DCu;
        // 0x11a2e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A2E4u;
}
