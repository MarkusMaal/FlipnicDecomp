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

// Function: FUN_0014c0b0
// Address: 0x14c0b0 - 0x14c25c
void FUN_0014c0b0_0x14c0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014c0b0_0x14c0b0");
#endif

    switch (ctx->pc) {
        case 0x14c0b0u: goto label_14c0b0;
        case 0x14c0b4u: goto label_14c0b4;
        case 0x14c0b8u: goto label_14c0b8;
        case 0x14c0bcu: goto label_14c0bc;
        case 0x14c0c0u: goto label_14c0c0;
        case 0x14c0c4u: goto label_14c0c4;
        case 0x14c0c8u: goto label_14c0c8;
        case 0x14c0ccu: goto label_14c0cc;
        case 0x14c0d0u: goto label_14c0d0;
        case 0x14c0d4u: goto label_14c0d4;
        case 0x14c0d8u: goto label_14c0d8;
        case 0x14c0dcu: goto label_14c0dc;
        case 0x14c0e0u: goto label_14c0e0;
        case 0x14c0e4u: goto label_14c0e4;
        case 0x14c0e8u: goto label_14c0e8;
        case 0x14c0ecu: goto label_14c0ec;
        case 0x14c0f0u: goto label_14c0f0;
        case 0x14c0f4u: goto label_14c0f4;
        case 0x14c0f8u: goto label_14c0f8;
        case 0x14c0fcu: goto label_14c0fc;
        case 0x14c100u: goto label_14c100;
        case 0x14c104u: goto label_14c104;
        case 0x14c108u: goto label_14c108;
        case 0x14c10cu: goto label_14c10c;
        case 0x14c110u: goto label_14c110;
        case 0x14c114u: goto label_14c114;
        case 0x14c118u: goto label_14c118;
        case 0x14c11cu: goto label_14c11c;
        case 0x14c120u: goto label_14c120;
        case 0x14c124u: goto label_14c124;
        case 0x14c128u: goto label_14c128;
        case 0x14c12cu: goto label_14c12c;
        case 0x14c130u: goto label_14c130;
        case 0x14c134u: goto label_14c134;
        case 0x14c138u: goto label_14c138;
        case 0x14c13cu: goto label_14c13c;
        case 0x14c140u: goto label_14c140;
        case 0x14c144u: goto label_14c144;
        case 0x14c148u: goto label_14c148;
        case 0x14c14cu: goto label_14c14c;
        case 0x14c150u: goto label_14c150;
        case 0x14c154u: goto label_14c154;
        case 0x14c158u: goto label_14c158;
        case 0x14c15cu: goto label_14c15c;
        case 0x14c160u: goto label_14c160;
        case 0x14c164u: goto label_14c164;
        case 0x14c168u: goto label_14c168;
        case 0x14c16cu: goto label_14c16c;
        case 0x14c170u: goto label_14c170;
        case 0x14c174u: goto label_14c174;
        case 0x14c178u: goto label_14c178;
        case 0x14c17cu: goto label_14c17c;
        case 0x14c180u: goto label_14c180;
        case 0x14c184u: goto label_14c184;
        case 0x14c188u: goto label_14c188;
        case 0x14c18cu: goto label_14c18c;
        case 0x14c190u: goto label_14c190;
        case 0x14c194u: goto label_14c194;
        case 0x14c198u: goto label_14c198;
        case 0x14c19cu: goto label_14c19c;
        case 0x14c1a0u: goto label_14c1a0;
        case 0x14c1a4u: goto label_14c1a4;
        case 0x14c1a8u: goto label_14c1a8;
        case 0x14c1acu: goto label_14c1ac;
        case 0x14c1b0u: goto label_14c1b0;
        case 0x14c1b4u: goto label_14c1b4;
        case 0x14c1b8u: goto label_14c1b8;
        case 0x14c1bcu: goto label_14c1bc;
        case 0x14c1c0u: goto label_14c1c0;
        case 0x14c1c4u: goto label_14c1c4;
        case 0x14c1c8u: goto label_14c1c8;
        case 0x14c1ccu: goto label_14c1cc;
        case 0x14c1d0u: goto label_14c1d0;
        case 0x14c1d4u: goto label_14c1d4;
        case 0x14c1d8u: goto label_14c1d8;
        case 0x14c1dcu: goto label_14c1dc;
        case 0x14c1e0u: goto label_14c1e0;
        case 0x14c1e4u: goto label_14c1e4;
        case 0x14c1e8u: goto label_14c1e8;
        case 0x14c1ecu: goto label_14c1ec;
        case 0x14c1f0u: goto label_14c1f0;
        case 0x14c1f4u: goto label_14c1f4;
        case 0x14c1f8u: goto label_14c1f8;
        case 0x14c1fcu: goto label_14c1fc;
        case 0x14c200u: goto label_14c200;
        case 0x14c204u: goto label_14c204;
        case 0x14c208u: goto label_14c208;
        case 0x14c20cu: goto label_14c20c;
        case 0x14c210u: goto label_14c210;
        case 0x14c214u: goto label_14c214;
        case 0x14c218u: goto label_14c218;
        case 0x14c21cu: goto label_14c21c;
        case 0x14c220u: goto label_14c220;
        case 0x14c224u: goto label_14c224;
        case 0x14c228u: goto label_14c228;
        case 0x14c22cu: goto label_14c22c;
        case 0x14c230u: goto label_14c230;
        case 0x14c234u: goto label_14c234;
        case 0x14c238u: goto label_14c238;
        case 0x14c23cu: goto label_14c23c;
        case 0x14c240u: goto label_14c240;
        case 0x14c244u: goto label_14c244;
        case 0x14c248u: goto label_14c248;
        case 0x14c24cu: goto label_14c24c;
        case 0x14c250u: goto label_14c250;
        case 0x14c254u: goto label_14c254;
        case 0x14c258u: goto label_14c258;
        default: break;
    }

    ctx->pc = 0x14c0b0u;

label_14c0b0:
    // 0x14c0b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14c0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_14c0b4:
    // 0x14c0b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14c0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_14c0b8:
    // 0x14c0b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_14c0bc:
    // 0x14c0bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14c0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_14c0c0:
    // 0x14c0c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14c0c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14c0c4:
    // 0x14c0c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14c0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14c0c8:
    // 0x14c0c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14c0c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14c0cc:
    // 0x14c0cc: 0x1260005b  beqz        $s3, . + 4 + (0x5B << 2)
label_14c0d0:
    if (ctx->pc == 0x14C0D0u) {
        ctx->pc = 0x14C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0CCu;
        // 0x14c0d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C0D4u;
        goto label_14c0d4;
    }
    ctx->pc = 0x14C0CCu;
    {
        const bool branch_taken_0x14c0cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0CCu;
        // 0x14c0d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c0cc) {
            ctx->pc = 0x14C23Cu;
            goto label_14c23c;
        }
    }
    ctx->pc = 0x14C0D4u;
label_14c0d4:
    // 0x14c0d4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x14c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_14c0d8:
    // 0x14c0d8: 0x24429320  addiu       $v0, $v0, -0x6CE0
    ctx->pc = 0x14c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939424));
label_14c0dc:
    // 0x14c0dc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x14c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_14c0e0:
    // 0x14c0e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_14c0e4:
    if (ctx->pc == 0x14C0E4u) {
        ctx->pc = 0x14C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0E0u;
        // 0x14c0e4: 0x8e7000bc  lw          $s0, 0xBC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C0E8u;
        goto label_14c0e8;
    }
    ctx->pc = 0x14C0E0u;
    {
        const bool branch_taken_0x14c0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0E0u;
        // 0x14c0e4: 0x8e7000bc  lw          $s0, 0xBC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c0e0) {
            ctx->pc = 0x14C0F4u;
            goto label_14c0f4;
        }
    }
    ctx->pc = 0x14C0E8u;
label_14c0e8:
    // 0x14c0e8: 0xc04c178  jal         func_1305E0
label_14c0ec:
    if (ctx->pc == 0x14C0ECu) {
        ctx->pc = 0x14C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0E8u;
        // 0x14c0ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C0F0u;
        goto label_14c0f0;
    }
    ctx->pc = 0x14C0E8u;
    SET_GPR_U32(ctx, 31, 0x14C0F0u);
    ctx->pc = 0x14C0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C0E8u;
    // 0x14c0ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x14C0E8u, 0x14C0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0F0u;
label_14c0f0:
    // 0x14c0f0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x14c0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_14c0f4:
    // 0x14c0f4: 0x0  nop
    ctx->pc = 0x14c0f4u;
    // NOP
label_14c0f8:
    // 0x14c0f8: 0x8e6300b8  lw          $v1, 0xB8($s3)
    ctx->pc = 0x14c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_14c0fc:
    // 0x14c0fc: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x14c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_14c100:
    // 0x14c100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14c104:
    // 0x14c104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14c108:
    // 0x14c108: 0x1602fff7  bne         $s0, $v0, . + 4 + (-0x9 << 2)
label_14c10c:
    if (ctx->pc == 0x14C10Cu) {
        ctx->pc = 0x14C110u;
        goto label_14c110;
    }
    ctx->pc = 0x14C108u;
    {
        const bool branch_taken_0x14c108 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c108) {
            ctx->pc = 0x14C0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c0e8;
        }
    }
    ctx->pc = 0x14C110u;
label_14c110:
    // 0x14c110: 0x1000000e  b           . + 4 + (0xE << 2)
label_14c114:
    if (ctx->pc == 0x14C114u) {
        ctx->pc = 0x14C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C110u;
        // 0x14c114: 0x8e7000c8  lw          $s0, 0xC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C118u;
        goto label_14c118;
    }
    ctx->pc = 0x14C110u;
    {
        const bool branch_taken_0x14c110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C110u;
        // 0x14c114: 0x8e7000c8  lw          $s0, 0xC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c110) {
            ctx->pc = 0x14C14Cu;
            goto label_14c14c;
        }
    }
    ctx->pc = 0x14C118u;
label_14c118:
    // 0x14c118: 0x10000007  b           . + 4 + (0x7 << 2)
label_14c11c:
    if (ctx->pc == 0x14C11Cu) {
        ctx->pc = 0x14C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C118u;
        // 0x14c11c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C120u;
        goto label_14c120;
    }
    ctx->pc = 0x14C118u;
    {
        const bool branch_taken_0x14c118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C118u;
        // 0x14c11c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c118) {
            ctx->pc = 0x14C138u;
            goto label_14c138;
        }
    }
    ctx->pc = 0x14C120u;
label_14c120:
    // 0x14c120: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x14c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14c124:
    // 0x14c124: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x14c124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_14c128:
    // 0x14c128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14c12c:
    // 0x14c12c: 0xc04c178  jal         func_1305E0
label_14c130:
    if (ctx->pc == 0x14C130u) {
        ctx->pc = 0x14C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C12Cu;
        // 0x14c130: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C134u;
        goto label_14c134;
    }
    ctx->pc = 0x14C12Cu;
    SET_GPR_U32(ctx, 31, 0x14C134u);
    ctx->pc = 0x14C130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C12Cu;
    // 0x14c130: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x14C12Cu, 0x14C134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C134u;
label_14c134:
    // 0x14c134: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14c134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_14c138:
    // 0x14c138: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14c138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14c13c:
    // 0x14c13c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x14c13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14c140:
    // 0x14c140: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_14c144:
    if (ctx->pc == 0x14C144u) {
        ctx->pc = 0x14C148u;
        goto label_14c148;
    }
    ctx->pc = 0x14C140u;
    {
        const bool branch_taken_0x14c140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c140) {
            ctx->pc = 0x14C120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c120;
        }
    }
    ctx->pc = 0x14C148u;
label_14c148:
    // 0x14c148: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14c148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_14c14c:
    // 0x14c14c: 0x0  nop
    ctx->pc = 0x14c14cu;
    // NOP
label_14c150:
    // 0x14c150: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x14c150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_14c154:
    // 0x14c154: 0x8e6200c8  lw          $v0, 0xC8($s3)
    ctx->pc = 0x14c154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
label_14c158:
    // 0x14c158: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14c158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_14c15c:
    // 0x14c15c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14c160:
    // 0x14c160: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14c164:
    // 0x14c164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14c168:
    // 0x14c168: 0x1602ffeb  bne         $s0, $v0, . + 4 + (-0x15 << 2)
label_14c16c:
    if (ctx->pc == 0x14C16Cu) {
        ctx->pc = 0x14C170u;
        goto label_14c170;
    }
    ctx->pc = 0x14C168u;
    {
        const bool branch_taken_0x14c168 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c168) {
            ctx->pc = 0x14C118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c118;
        }
    }
    ctx->pc = 0x14C170u;
label_14c170:
    // 0x14c170: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x14c170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_14c174:
    // 0x14c174: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_14c178:
    if (ctx->pc == 0x14C178u) {
        ctx->pc = 0x14C17Cu;
        goto label_14c17c;
    }
    ctx->pc = 0x14C174u;
    {
        const bool branch_taken_0x14c174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c174) {
            ctx->pc = 0x14C18Cu;
            goto label_14c18c;
        }
    }
    ctx->pc = 0x14C17Cu;
label_14c17c:
    // 0x14c17c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c17cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c180:
    // 0x14c180: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x14c180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_14c184:
    // 0x14c184: 0x320f809  jalr        $t9
label_14c188:
    if (ctx->pc == 0x14C188u) {
        ctx->pc = 0x14C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C184u;
        // 0x14c188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C18Cu;
        goto label_14c18c;
    }
    ctx->pc = 0x14C184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C18Cu);
        ctx->pc = 0x14C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C184u;
        // 0x14c188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C184u, 0x14C18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C18Cu;
label_14c18c:
    // 0x14c18c: 0xaf8085d8  sw          $zero, -0x7A28($gp)
    ctx->pc = 0x14c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936024), GPR_U32(ctx, 0));
label_14c190:
    // 0x14c190: 0x266400f8  addiu       $a0, $s3, 0xF8
    ctx->pc = 0x14c190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 248));
label_14c194:
    // 0x14c194: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_14c198:
    if (ctx->pc == 0x14C198u) {
        ctx->pc = 0x14C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C194u;
        // 0x14c198: 0xae600080  sw          $zero, 0x80($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C19Cu;
        goto label_14c19c;
    }
    ctx->pc = 0x14C194u;
    {
        const bool branch_taken_0x14c194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C194u;
        // 0x14c198: 0xae600080  sw          $zero, 0x80($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c194) {
            ctx->pc = 0x14C1ACu;
            goto label_14c1ac;
        }
    }
    ctx->pc = 0x14C19Cu;
label_14c19c:
    // 0x14c19c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_14c1a0:
    if (ctx->pc == 0x14C1A0u) {
        ctx->pc = 0x14C1A4u;
        goto label_14c1a4;
    }
    ctx->pc = 0x14C19Cu;
    {
        const bool branch_taken_0x14c19c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c19c) {
            ctx->pc = 0x14C1ACu;
            goto label_14c1ac;
        }
    }
    ctx->pc = 0x14C1A4u;
label_14c1a4:
    // 0x14c1a4: 0xc048414  jal         func_121050
label_14c1a8:
    if (ctx->pc == 0x14C1A8u) {
        ctx->pc = 0x14C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1A4u;
        // 0x14c1a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C1ACu;
        goto label_14c1ac;
    }
    ctx->pc = 0x14C1A4u;
    SET_GPR_U32(ctx, 31, 0x14C1ACu);
    ctx->pc = 0x14C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C1A4u;
    // 0x14c1a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x14C1A4u, 0x14C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1ACu;
label_14c1ac:
    // 0x14c1ac: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x14c1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_14c1b0:
    // 0x14c1b0: 0x266400e0  addiu       $a0, $s3, 0xE0
    ctx->pc = 0x14c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
label_14c1b4:
    // 0x14c1b4: 0x24a5bfb0  addiu       $a1, $a1, -0x4050
    ctx->pc = 0x14c1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950832));
label_14c1b8:
    // 0x14c1b8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x14c1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_14c1bc:
    // 0x14c1bc: 0xc07a3bc  jal         func_1E8EF0
label_14c1c0:
    if (ctx->pc == 0x14C1C0u) {
        ctx->pc = 0x14C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1BCu;
        // 0x14c1c0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C1C4u;
        goto label_14c1c4;
    }
    ctx->pc = 0x14C1BCu;
    SET_GPR_U32(ctx, 31, 0x14C1C4u);
    ctx->pc = 0x14C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C1BCu;
    // 0x14c1c0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x14C1BCu, 0x14C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1C4u;
label_14c1c4:
    // 0x14c1c4: 0x266400cc  addiu       $a0, $s3, 0xCC
    ctx->pc = 0x14c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 204));
label_14c1c8:
    // 0x14c1c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_14c1cc:
    if (ctx->pc == 0x14C1CCu) {
        ctx->pc = 0x14C1D0u;
        goto label_14c1d0;
    }
    ctx->pc = 0x14C1C8u;
    {
        const bool branch_taken_0x14c1c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c1c8) {
            ctx->pc = 0x14C1E0u;
            goto label_14c1e0;
        }
    }
    ctx->pc = 0x14C1D0u;
label_14c1d0:
    // 0x14c1d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_14c1d4:
    if (ctx->pc == 0x14C1D4u) {
        ctx->pc = 0x14C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1D0u;
        // 0x14c1d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C1D8u;
        goto label_14c1d8;
    }
    ctx->pc = 0x14C1D0u;
    {
        const bool branch_taken_0x14c1d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1D0u;
        // 0x14c1d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1d0) {
            ctx->pc = 0x14C1E0u;
            goto label_14c1e0;
        }
    }
    ctx->pc = 0x14C1D8u;
label_14c1d8:
    // 0x14c1d8: 0xc053780  jal         func_14DE00
label_14c1dc:
    if (ctx->pc == 0x14C1DCu) {
        ctx->pc = 0x14C1E0u;
        goto label_14c1e0;
    }
    ctx->pc = 0x14C1D8u;
    SET_GPR_U32(ctx, 31, 0x14C1E0u);
    ctx->pc = 0x14DE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DE00u, 0x14C1D8u, 0x14C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1E0u;
label_14c1e0:
    // 0x14c1e0: 0x266400c0  addiu       $a0, $s3, 0xC0
    ctx->pc = 0x14c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
label_14c1e4:
    // 0x14c1e4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_14c1e8:
    if (ctx->pc == 0x14C1E8u) {
        ctx->pc = 0x14C1ECu;
        goto label_14c1ec;
    }
    ctx->pc = 0x14C1E4u;
    {
        const bool branch_taken_0x14c1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c1e4) {
            ctx->pc = 0x14C1FCu;
            goto label_14c1fc;
        }
    }
    ctx->pc = 0x14C1ECu;
label_14c1ec:
    // 0x14c1ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_14c1f0:
    if (ctx->pc == 0x14C1F0u) {
        ctx->pc = 0x14C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1ECu;
        // 0x14c1f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C1F4u;
        goto label_14c1f4;
    }
    ctx->pc = 0x14C1ECu;
    {
        const bool branch_taken_0x14c1ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1ECu;
        // 0x14c1f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1ec) {
            ctx->pc = 0x14C1FCu;
            goto label_14c1fc;
        }
    }
    ctx->pc = 0x14C1F4u;
label_14c1f4:
    // 0x14c1f4: 0xc053764  jal         func_14DD90
label_14c1f8:
    if (ctx->pc == 0x14C1F8u) {
        ctx->pc = 0x14C1FCu;
        goto label_14c1fc;
    }
    ctx->pc = 0x14C1F4u;
    SET_GPR_U32(ctx, 31, 0x14C1FCu);
    ctx->pc = 0x14DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DD90u, 0x14C1F4u, 0x14C1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1FCu;
label_14c1fc:
    // 0x14c1fc: 0x266400b4  addiu       $a0, $s3, 0xB4
    ctx->pc = 0x14c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 180));
label_14c200:
    // 0x14c200: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_14c204:
    if (ctx->pc == 0x14C204u) {
        ctx->pc = 0x14C208u;
        goto label_14c208;
    }
    ctx->pc = 0x14C200u;
    {
        const bool branch_taken_0x14c200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c200) {
            ctx->pc = 0x14C218u;
            goto label_14c218;
        }
    }
    ctx->pc = 0x14C208u;
label_14c208:
    // 0x14c208: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_14c20c:
    if (ctx->pc == 0x14C20Cu) {
        ctx->pc = 0x14C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C208u;
        // 0x14c20c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C210u;
        goto label_14c210;
    }
    ctx->pc = 0x14C208u;
    {
        const bool branch_taken_0x14c208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C208u;
        // 0x14c20c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c208) {
            ctx->pc = 0x14C218u;
            goto label_14c218;
        }
    }
    ctx->pc = 0x14C210u;
label_14c210:
    // 0x14c210: 0xc048414  jal         func_121050
label_14c214:
    if (ctx->pc == 0x14C214u) {
        ctx->pc = 0x14C218u;
        goto label_14c218;
    }
    ctx->pc = 0x14C210u;
    SET_GPR_U32(ctx, 31, 0x14C218u);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x14C210u, 0x14C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C218u;
label_14c218:
    // 0x14c218: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14c218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14c21c:
    // 0x14c21c: 0xc04d108  jal         func_134420
label_14c220:
    if (ctx->pc == 0x14C220u) {
        ctx->pc = 0x14C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C21Cu;
        // 0x14c220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C224u;
        goto label_14c224;
    }
    ctx->pc = 0x14C21Cu;
    SET_GPR_U32(ctx, 31, 0x14C224u);
    ctx->pc = 0x14C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C21Cu;
    // 0x14c220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134420u, 0x14C21Cu, 0x14C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C224u;
label_14c224:
    // 0x14c224: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x14c224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_14c228:
    // 0x14c228: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14c228u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_14c22c:
    // 0x14c22c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_14c230:
    if (ctx->pc == 0x14C230u) {
        ctx->pc = 0x14C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C22Cu;
        // 0x14c230: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C234u;
        goto label_14c234;
    }
    ctx->pc = 0x14C22Cu;
    {
        const bool branch_taken_0x14c22c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C22Cu;
        // 0x14c230: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c22c) {
            ctx->pc = 0x14C240u;
            goto label_14c240;
        }
    }
    ctx->pc = 0x14C234u;
label_14c234:
    // 0x14c234: 0xc0401a4  jal         func_100690
label_14c238:
    if (ctx->pc == 0x14C238u) {
        ctx->pc = 0x14C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C234u;
        // 0x14c238: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C23Cu;
        goto label_14c23c;
    }
    ctx->pc = 0x14C234u;
    SET_GPR_U32(ctx, 31, 0x14C23Cu);
    ctx->pc = 0x14C238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C234u;
    // 0x14c238: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14C234u, 0x14C23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C23Cu;
label_14c23c:
    // 0x14c23c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x14c23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14c240:
    // 0x14c240: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14c240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_14c244:
    // 0x14c244: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14c244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14c248:
    // 0x14c248: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14c248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14c24c:
    // 0x14c24c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14c24cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14c250:
    // 0x14c250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14c250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14c254:
    // 0x14c254: 0x3e00008  jr          $ra
label_14c258:
    if (ctx->pc == 0x14C258u) {
        ctx->pc = 0x14C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C254u;
        // 0x14c258: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C25Cu;
        goto label_fallthrough_0x14c254;
    }
    ctx->pc = 0x14C254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C254u;
        // 0x14c258: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14c254:
    ctx->pc = 0x14C25Cu;
}
