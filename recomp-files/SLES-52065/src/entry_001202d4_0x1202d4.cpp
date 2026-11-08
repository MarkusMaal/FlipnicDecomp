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

// Function: entry_001202d4
// Address: 0x1202d4 - 0x120384
void entry_001202d4_0x1202d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001202d4_0x1202d4");
#endif

    switch (ctx->pc) {
        case 0x12033cu: goto label_12033c;
        default: break;
    }

    ctx->pc = 0x1202d4u;

    // 0x1202d4: 0x96830054  lhu         $v1, 0x54($s4)
    ctx->pc = 0x1202d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1202d8: 0x2405f000  addiu       $a1, $zero, -0x1000
    ctx->pc = 0x1202d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1202dc: 0x30e70fff  andi        $a3, $a3, 0xFFF
    ctx->pc = 0x1202dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x1202e0: 0x30c40fff  andi        $a0, $a2, 0xFFF
    ctx->pc = 0x1202e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x1202e4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1202e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1202e8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1202e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1202ec: 0xa6830054  sh          $v1, 0x54($s4)
    ctx->pc = 0x1202ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x1202f0: 0x96830050  lhu         $v1, 0x50($s4)
    ctx->pc = 0x1202f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1202f4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1202f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1202f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1202f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1202fc: 0xa6830050  sh          $v1, 0x50($s4)
    ctx->pc = 0x1202fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x120300: 0x8e910084  lw          $s1, 0x84($s4)
    ctx->pc = 0x120300u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x120304: 0x12200077  beqz        $s1, . + 4 + (0x77 << 2)
    ctx->pc = 0x120304u;
    {
        const bool branch_taken_0x120304 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x120304) {
            ctx->pc = 0x1204E4u;
            return;
        }
    }
    ctx->pc = 0x12030Cu;
    // 0x12030c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x12030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x120310: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x120310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x120314: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x120314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x120318: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x120318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12031c: 0x28482  srl         $s0, $v0, 18
    ctx->pc = 0x12031cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 18));
    // 0x120320: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x120320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x120324: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x120324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x120328: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x120328u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12032c: 0x121102  srl         $v0, $s2, 4
    ctx->pc = 0x12032cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x120330: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120334: 0xc040128  jal         func_1004A0
    ctx->pc = 0x120334u;
    SET_GPR_U32(ctx, 31, 0x12033Cu);
    ctx->pc = 0x120338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120334u;
    // 0x120338: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x120334u, 0x12033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12033Cu;
label_12033c:
    // 0x12033c: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x12033cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    // 0x120340: 0x10082b  sltu        $at, $zero, $s0
    ctx->pc = 0x120340u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x120344: 0x8e980080  lw          $t8, 0x80($s4)
    ctx->pc = 0x120344u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x120348: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x120348u;
    {
        const bool branch_taken_0x120348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120348u;
        // 0x12034c: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120348) {
            ctx->pc = 0x1204B8u;
            return;
        }
    }
    ctx->pc = 0x120350u;
    // 0x120350: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x120350u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120354: 0x11b102  srl         $s6, $s1, 4
    ctx->pc = 0x120354u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x120358: 0x3c1e5000  lui         $fp, 0x5000
    ctx->pc = 0x120358u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)20480 << 16));
    // 0x12035c: 0x3c0e0021  lui         $t6, 0x21
    ctx->pc = 0x12035cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)33 << 16));
    // 0x120360: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x120360u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120364: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x120364u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x120368: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x120368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x12036c: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x12036cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x120370: 0x37cb0001  ori         $t3, $fp, 0x1
    ctx->pc = 0x120370u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x120374: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x120374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x120378: 0x3c081100  lui         $t0, 0x1100
    ctx->pc = 0x120378u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4352 << 16));
    // 0x12037c: 0x25ce0b20  addiu       $t6, $t6, 0xB20
    ctx->pc = 0x12037cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2848));
    // 0x120380: 0x37ca4000  ori         $t2, $fp, 0x4000
    ctx->pc = 0x120380u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16384);
    ctx->pc = 0x120384u;
}
