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

// Function: entry_00125578
// Address: 0x125578 - 0x125668
void entry_00125578_0x125578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125578_0x125578");
#endif

    switch (ctx->pc) {
        case 0x1255ccu: goto label_1255cc;
        case 0x1255f8u: goto label_1255f8;
        default: break;
    }

    ctx->pc = 0x125578u;

    // 0x125578: 0xde670060  ld          $a3, 0x60($s3)
    ctx->pc = 0x125578u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x12557c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12557cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x125580: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x125580u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x125584: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x125584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x125588: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x125588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x12558c: 0x333b8  dsll        $a2, $v1, 14
    ctx->pc = 0x12558cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 14);
    // 0x125590: 0x34453fff  ori         $a1, $v0, 0x3FFF
    ctx->pc = 0x125590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x125594: 0x3003003f  andi        $v1, $zero, 0x3F
    ctx->pc = 0x125594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)63);
    // 0x125598: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x125598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x12559c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x12559cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1255a0: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1255a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1255a4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1255a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1255a8: 0xfe650060  sd          $a1, 0x60($s3)
    ctx->pc = 0x1255a8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 5));
    // 0x1255ac: 0x96650062  lhu         $a1, 0x62($s3)
    ctx->pc = 0x1255acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 98)));
    // 0x1255b0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1255b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1255b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1255b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1255b8: 0xa6620062  sh          $v0, 0x62($s3)
    ctx->pc = 0x1255b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 98), (uint16_t)GPR_U32(ctx, 2));
    // 0x1255bc: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x1255bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1255c0: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x1255c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1255c4: 0xc04927c  jal         func_1249F0
    ctx->pc = 0x1255C4u;
    SET_GPR_U32(ctx, 31, 0x1255CCu);
    ctx->pc = 0x1255C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1255C4u;
    // 0x1255c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249F0u, 0x1255C4u, 0x1255CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1255CCu;
label_1255cc:
    // 0x1255cc: 0x92650063  lbu         $a1, 0x63($s3)
    ctx->pc = 0x1255ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 99)));
    // 0x1255d0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1255d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1255d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1255d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1255d8: 0x2402ffc3  addiu       $v0, $zero, -0x3D
    ctx->pc = 0x1255d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x1255dc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1255dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1255e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1255e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1255e4: 0xa2620063  sb          $v0, 0x63($s3)
    ctx->pc = 0x1255e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 99), (uint8_t)GPR_U32(ctx, 2));
    // 0x1255e8: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x1255e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1255ec: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x1255ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1255f0: 0xc04927c  jal         func_1249F0
    ctx->pc = 0x1255F0u;
    SET_GPR_U32(ctx, 31, 0x1255F8u);
    ctx->pc = 0x1255F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1255F0u;
    // 0x1255f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249F0u, 0x1255F0u, 0x1255F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1255F8u;
label_1255f8:
    // 0x1255f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1255f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1255fc: 0xde680060  ld          $t0, 0x60($s3)
    ctx->pc = 0x1255fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x125600: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x125600u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x125604: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x125604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x125608: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x125608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x12560c: 0x64050004  daddiu      $a1, $zero, 0x4
    ctx->pc = 0x12560cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x125610: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x125610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x125614: 0x337b8  dsll        $a2, $v1, 30
    ctx->pc = 0x125614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 30);
    // 0x125618: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x125618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12561c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12561cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125620: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x125620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x125624: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x125624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x125628: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x125628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12562c: 0x1021824  and         $v1, $t0, $v0
    ctx->pc = 0x12562cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x125630: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x125630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x125634: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x125634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x125638: 0xfe660060  sd          $a2, 0x60($s3)
    ctx->pc = 0x125638u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 6));
    // 0x12563c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x12563cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x125640: 0x92660064  lbu         $a2, 0x64($s3)
    ctx->pc = 0x125640u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x125644: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x125644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x125648: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x125648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x12564c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x12564cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x125650: 0xa2640064  sb          $a0, 0x64($s3)
    ctx->pc = 0x125650u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 100), (uint8_t)GPR_U32(ctx, 4));
    // 0x125654: 0x92640064  lbu         $a0, 0x64($s3)
    ctx->pc = 0x125654u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x125658: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x125658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12565c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12565cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125660: 0xa2620064  sb          $v0, 0x64($s3)
    ctx->pc = 0x125660u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x125664: 0xae670084  sw          $a3, 0x84($s3)
    ctx->pc = 0x125664u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 7));
    ctx->pc = 0x125668u;
}
