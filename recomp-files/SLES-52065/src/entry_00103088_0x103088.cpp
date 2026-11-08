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

// Function: entry_00103088
// Address: 0x103088 - 0x103190
void entry_00103088_0x103088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103088_0x103088");
#endif

    switch (ctx->pc) {
        case 0x1030b0u: goto label_1030b0;
        case 0x1030e0u: goto label_1030e0;
        case 0x103100u: goto label_103100;
        case 0x103118u: goto label_103118;
        case 0x10313cu: goto label_10313c;
        case 0x103144u: goto label_103144;
        default: break;
    }

    ctx->pc = 0x103088u;

label_103088:
    // 0x103088: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x103088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10308c:
    // 0x10308c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x10308cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_103090:
    // 0x103090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x103090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_103094:
    // 0x103094: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x103094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_103098:
    // 0x103098: 0x12600094  beqz        $s3, . + 4 + (0x94 << 2)
label_10309c:
    if (ctx->pc == 0x10309Cu) {
        ctx->pc = 0x10309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103098u;
        // 0x10309c: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1030A0u;
        goto label_1030a0;
    }
    ctx->pc = 0x103098u;
    {
        const bool branch_taken_0x103098 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103098u;
        // 0x10309c: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103098) {
            ctx->pc = 0x1032ECu;
            return;
        }
    }
    ctx->pc = 0x1030A0u;
label_1030a0:
    // 0x1030a0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1030a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1030a4:
    // 0x1030a4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1030a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1030a8:
    // 0x1030a8: 0x320f809  jalr        $t9
label_1030ac:
    if (ctx->pc == 0x1030ACu) {
        ctx->pc = 0x1030ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030A8u;
        // 0x1030ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1030B0u;
        goto label_1030b0;
    }
    ctx->pc = 0x1030A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1030B0u);
        ctx->pc = 0x1030ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030A8u;
        // 0x1030ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1030A8u, 0x1030B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1030B0u;
label_1030b0:
    // 0x1030b0: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_1030b4:
    if (ctx->pc == 0x1030B4u) {
        ctx->pc = 0x1030B8u;
        goto label_1030b8;
    }
    ctx->pc = 0x1030B0u;
    {
        const bool branch_taken_0x1030b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1030b0) {
            ctx->pc = 0x103200u;
            return;
        }
    }
    ctx->pc = 0x1030B8u;
label_1030b8:
    // 0x1030b8: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1030b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1030bc:
    // 0x1030bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1030bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1030c0:
    // 0x1030c0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1030c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1030c4:
    // 0x1030c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1030c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1030c8:
    // 0x1030c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1030c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1030cc:
    // 0x1030cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1030ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1030d0:
    // 0x1030d0: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1030d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1030d4:
    // 0x1030d4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1030d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1030d8:
    // 0x1030d8: 0x320f809  jalr        $t9
label_1030dc:
    if (ctx->pc == 0x1030DCu) {
        ctx->pc = 0x1030DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030D8u;
        // 0x1030dc: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1030E0u;
        goto label_1030e0;
    }
    ctx->pc = 0x1030D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1030E0u);
        ctx->pc = 0x1030DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030D8u;
        // 0x1030dc: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1030D8u, 0x1030E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1030E0u;
label_1030e0:
    // 0x1030e0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1030e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1030e4:
    // 0x1030e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1030e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1030e8:
    // 0x1030e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1030e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1030ec:
    // 0x1030ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1030ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1030f0:
    // 0x1030f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1030f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1030f4:
    // 0x1030f4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1030f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1030f8:
    // 0x1030f8: 0x320f809  jalr        $t9
label_1030fc:
    if (ctx->pc == 0x1030FCu) {
        ctx->pc = 0x1030FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030F8u;
        // 0x1030fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103100u;
        goto label_103100;
    }
    ctx->pc = 0x1030F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103100u);
        ctx->pc = 0x1030FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030F8u;
        // 0x1030fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1030F8u, 0x103100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103100u;
label_103100:
    // 0x103100: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x103100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_103104:
    // 0x103104: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x103104u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103108:
    // 0x103108: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10310c:
    // 0x10310c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10310cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_103110:
    // 0x103110: 0x320f809  jalr        $t9
label_103114:
    if (ctx->pc == 0x103114u) {
        ctx->pc = 0x103114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103110u;
        // 0x103114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103118u;
        goto label_103118;
    }
    ctx->pc = 0x103110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103118u);
        ctx->pc = 0x103114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103110u;
        // 0x103114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103110u, 0x103118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103118u;
label_103118:
    // 0x103118: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x103118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10311c:
    // 0x10311c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10311cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103120:
    // 0x103120: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x103120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_103124:
    // 0x103124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x103124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_103128:
    // 0x103128: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x103128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10312c:
    // 0x10312c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10312cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_103130:
    // 0x103130: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x103130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_103134:
    // 0x103134: 0x320f809  jalr        $t9
label_103138:
    if (ctx->pc == 0x103138u) {
        ctx->pc = 0x103138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103134u;
        // 0x103138: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10313Cu;
        goto label_10313c;
    }
    ctx->pc = 0x103134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10313Cu);
        ctx->pc = 0x103138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103134u;
        // 0x103138: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103134u, 0x10313Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10313Cu;
label_10313c:
    // 0x10313c: 0xc04c734  jal         func_131CD0
label_103140:
    if (ctx->pc == 0x103140u) {
        ctx->pc = 0x103140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10313Cu;
        // 0x103140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103144u;
        goto label_103144;
    }
    ctx->pc = 0x10313Cu;
    SET_GPR_U32(ctx, 31, 0x103144u);
    ctx->pc = 0x103140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10313Cu;
    // 0x103140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CD0u, 0x10313Cu, 0x103144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103144u;
label_103144:
    // 0x103144: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x103144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_103148:
    // 0x103148: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x103148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10314c:
    // 0x10314c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10314cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_103150:
    // 0x103150: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x103150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_103154:
    // 0x103154: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x103154u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_103158:
    // 0x103158: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x103158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10315c:
    // 0x10315c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x10315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_103160:
    // 0x103160: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x103160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_103164:
    // 0x103164: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x103164u;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
label_103168:
    // 0x103168: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x103168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_10316c:
    // 0x10316c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x10316cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_103170:
    // 0x103170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x103170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_103174:
    // 0x103174: 0x0  nop
    ctx->pc = 0x103174u;
    // NOP
label_103178:
    // 0x103178: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x103178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10317c:
    // 0x10317c: 0x0  nop
    ctx->pc = 0x10317cu;
    // NOP
label_103180:
    // 0x103180: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_103184:
    if (ctx->pc == 0x103184u) {
        ctx->pc = 0x103184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103180u;
        // 0x103184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103188u;
        goto label_103188;
    }
    ctx->pc = 0x103180u;
    {
        const bool branch_taken_0x103180 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x103184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103180u;
        // 0x103184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103180) {
            ctx->pc = 0x103190u;
            return;
        }
    }
    ctx->pc = 0x103188u;
label_103188:
    // 0x103188: 0x10000002  b           . + 4 + (0x2 << 2)
label_10318c:
    if (ctx->pc == 0x10318Cu) {
        ctx->pc = 0x103190u;
        goto label_fallthrough_0x103188;
    }
    ctx->pc = 0x103188u;
    {
        const bool branch_taken_0x103188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x103188) {
            ctx->pc = 0x103194u;
            return;
        }
    }
label_fallthrough_0x103188:
    ctx->pc = 0x103190u;
}
