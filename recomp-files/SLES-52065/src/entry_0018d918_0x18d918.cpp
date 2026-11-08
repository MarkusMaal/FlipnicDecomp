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

// Function: entry_0018d918
// Address: 0x18d918 - 0x18d9f4
void entry_0018d918_0x18d918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d918_0x18d918");
#endif

    switch (ctx->pc) {
        case 0x18d940u: goto label_18d940;
        case 0x18d960u: goto label_18d960;
        case 0x18d980u: goto label_18d980;
        case 0x18d990u: goto label_18d990;
        case 0x18d9a0u: goto label_18d9a0;
        case 0x18d9ccu: goto label_18d9cc;
        case 0x18d9f0u: goto label_18d9f0;
        default: break;
    }

    ctx->pc = 0x18d918u;

    // 0x18d918: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d91c: 0x3c023d07  lui         $v0, 0x3D07
    ctx->pc = 0x18d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15623 << 16));
    // 0x18d920: 0xae232714  sw          $v1, 0x2714($s1)
    ctx->pc = 0x18d920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10004), GPR_U32(ctx, 3));
    // 0x18d924: 0x344273c7  ori         $v0, $v0, 0x73C7
    ctx->pc = 0x18d924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29639);
    // 0x18d928: 0xae202710  sw          $zero, 0x2710($s1)
    ctx->pc = 0x18d928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10000), GPR_U32(ctx, 0));
    // 0x18d92c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d930: 0xc6210504  lwc1        $f1, 0x504($s1)
    ctx->pc = 0x18d930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d934: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x18d934u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18d938: 0xc082520  jal         func_209480
    ctx->pc = 0x18D938u;
    SET_GPR_U32(ctx, 31, 0x18D940u);
    ctx->pc = 0x18D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D938u;
    // 0x18d93c: 0xe62c0504  swc1        $f12, 0x504($s1) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x18D938u, 0x18D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D940u;
label_18d940:
    // 0x18d940: 0x3c043fe9  lui         $a0, 0x3FE9
    ctx->pc = 0x18d940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16361 << 16));
    // 0x18d944: 0x3c035444  lui         $v1, 0x5444
    ctx->pc = 0x18d944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21572 << 16));
    // 0x18d948: 0x348421fb  ori         $a0, $a0, 0x21FB
    ctx->pc = 0x18d948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8699);
    // 0x18d94c: 0x34632d18  ori         $v1, $v1, 0x2D18
    ctx->pc = 0x18d94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11544);
    // 0x18d950: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x18d950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x18d954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d958: 0xc0400fc  jal         func_1003F0
    ctx->pc = 0x18D958u;
    SET_GPR_U32(ctx, 31, 0x18D960u);
    ctx->pc = 0x18D95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D958u;
    // 0x18d95c: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003F0u, 0x18D958u, 0x18D960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D960u;
label_18d960:
    // 0x18d960: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x18D960u;
    {
        const bool branch_taken_0x18d960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D960u;
        // 0x18d964: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d960) {
            ctx->pc = 0x18D9F4u;
            return;
        }
    }
    ctx->pc = 0x18D968u;
    // 0x18d968: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x18d968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
    // 0x18d96c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18d970: 0xae220480  sw          $v0, 0x480($s1)
    ctx->pc = 0x18d970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1152), GPR_U32(ctx, 2));
    // 0x18d974: 0xae200478  sw          $zero, 0x478($s1)
    ctx->pc = 0x18d974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 0));
    // 0x18d978: 0xc062d50  jal         func_18B540
    ctx->pc = 0x18D978u;
    SET_GPR_U32(ctx, 31, 0x18D980u);
    ctx->pc = 0x18D97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D978u;
    // 0x18d97c: 0xae20047c  sw          $zero, 0x47C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18D978u, 0x18D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D980u;
label_18d980:
    // 0x18d980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d984: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x18d984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x18d988: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x18D988u;
    SET_GPR_U32(ctx, 31, 0x18D990u);
    ctx->pc = 0x18D98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D988u;
    // 0x18d98c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18D988u, 0x18D990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D990u;
label_18d990:
    // 0x18d990: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18d990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18d994: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18d994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d998: 0xc05f878  jal         func_17E1E0
    ctx->pc = 0x18D998u;
    SET_GPR_U32(ctx, 31, 0x18D9A0u);
    ctx->pc = 0x18D99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D998u;
    // 0x18d99c: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18D998u, 0x18D9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D9A0u;
label_18d9a0:
    // 0x18d9a0: 0x8e260450  lw          $a2, 0x450($s1)
    ctx->pc = 0x18d9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18d9a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9a8: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18d9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18d9ac: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x18d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18d9b0: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x18d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18d9b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18d9b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d9bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18d9c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18d9c4: 0xc0532f4  jal         func_14CBD0
    ctx->pc = 0x18D9C4u;
    SET_GPR_U32(ctx, 31, 0x18D9CCu);
    ctx->pc = 0x18D9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D9C4u;
    // 0x18d9c8: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18D9C4u, 0x18D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D9CCu;
label_18d9cc:
    // 0x18d9cc: 0xae20045c  sw          $zero, 0x45C($s1)
    ctx->pc = 0x18d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 0));
    // 0x18d9d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9d4: 0xae200460  sw          $zero, 0x460($s1)
    ctx->pc = 0x18d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1120), GPR_U32(ctx, 0));
    // 0x18d9d8: 0xae200464  sw          $zero, 0x464($s1)
    ctx->pc = 0x18d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1124), GPR_U32(ctx, 0));
    // 0x18d9dc: 0xae20046c  sw          $zero, 0x46C($s1)
    ctx->pc = 0x18d9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1132), GPR_U32(ctx, 0));
    // 0x18d9e0: 0xae200468  sw          $zero, 0x468($s1)
    ctx->pc = 0x18d9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1128), GPR_U32(ctx, 0));
    // 0x18d9e4: 0xae202714  sw          $zero, 0x2714($s1)
    ctx->pc = 0x18d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10004), GPR_U32(ctx, 0));
    // 0x18d9e8: 0xc063e14  jal         func_18F850
    ctx->pc = 0x18D9E8u;
    SET_GPR_U32(ctx, 31, 0x18D9F0u);
    ctx->pc = 0x18D9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D9E8u;
    // 0x18d9ec: 0xae202710  sw          $zero, 0x2710($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 10000), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18D9E8u, 0x18D9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D9F0u;
label_18d9f0:
    // 0x18d9f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    ctx->pc = 0x18d9f4u;
}
